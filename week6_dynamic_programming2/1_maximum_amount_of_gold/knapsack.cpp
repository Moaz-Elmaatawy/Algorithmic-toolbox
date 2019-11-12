#include <iostream>
#include <vector>
using namespace std;

int optimal_weight(int W,  vector<int> w,int n) {
vector<vector<int> > arr (n+1 ,vector<int>(W+1));

for(int i=0;i<=W;++i){
    arr[0][i] = 0;
}
for(int i=0;i<=n;++i){
    arr[i][0]=0;
}


for (int i=1;i<=n;++i){
    for(int j=1;j<=W;++j){
        if(j<w[i-1]){
            arr[i][j]=arr[i-1][j];
        }
        else{
            arr[i][j]=max(arr[i-1][j-w[i-1]]+w[i-1],arr[i-1][j]);
        }
    }
}
/*
for (int i=0;i<=n;++i){
   for(int j=0;j<=W;++j){
       cout<<arr[i][j]<<",";
   }cout<<endl;}
   */
return arr[n][W];
}

int main() {
  int n, W;
  cin >> W >> n;
  vector<int> w(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }
  cout << optimal_weight(W, w,n) << '\n';
}
