#include <iostream>
#include <vector>
using namespace std;

int lcs2(vector<int> &a, vector<int> &b) {
  int n=a.size();
  int m= b.size();
  int d [110][110] ;

  for (int i=0;i<=n;++i){
    d[i][0]=0;
  }
    for (int i=0;i<=m;++i){
    d[0][i]=0;
  }



  for (int j=1;j<=m;++j){
    for(int i=1;i<=n;++i){
        int ins = d[i][j-1] ;
        int del=d[i-1][j] ;
        int match =d[i-1][j-1]+1;
        int mis=d[i-1][j-1] ;
        if(b[j-1]==a[i-1]){
            d[i][j]=max(match,max(ins,del));
        }
        else{
            d[i][j]=max(mis,max(ins,del));
        }
    }
  }


//for (int i=0;i<=n;++i){
//   for(int j=0;j<=m;++j){
//       cout<<d[i][j]<<",";
//   }cout<<endl;}

  return d[n][m];

}

int main() {
  size_t n;
  cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < n; i++) {
    cin >> a[i];
  }

  size_t m;
  cin >> m;
  vector<int> b(m);
  for (size_t i = 0; i < m; i++) {
    cin >> b[i];
  }

  cout << lcs2(a, b) <<endl;
}
