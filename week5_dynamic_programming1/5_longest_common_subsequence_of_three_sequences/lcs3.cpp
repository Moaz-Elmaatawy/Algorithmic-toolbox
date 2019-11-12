#include <iostream>
#include <vector>
using namespace std;



int lcs3(vector<int> &a, vector<int> &b, vector<int> &c) {
  int n=a.size();
  int m= b.size();
  int k=c.size();
  int d [m+1][n+1][k+1] ;

    for (int i=0;i<=n;++i){
    d[i][0][0]=0;
  }
    for (int i=0;i<=m;++i){
    d[0][i][0]=0;
  }
    for (int i=0;i<=k;++i){
    d[0][0][i]=0;
  }


for (int j=1;j<=m;++j){
    for(int i=1;i<=n;++i){
        for (int s=1;s<=k;++s){
            if(b[j-1]==a[i-1]&&b[j-1]==c[s-1]){
                d[i][j][s]=d[i-1][j-1][s-1]+1;
            }
            else{
                d[i][j][s]=max(d[i][j][s-1],max(d[i-1][j][s],d[i][j-1][s]));
            }
        }
    }
}

//for (int i=0;i<=n;++i){
//   for(int j=0;j<=m;++j){
//       cout<<d[i][j]<<",";
//   }cout<<endl;}

  return d[m][n][k];

}

int main() {
  size_t an;
  cin >> an;
  vector<int> a(an);
  for (size_t i = 0; i < an; i++) {
    cin >> a[i];
  }
  size_t bn;
  cin >> bn;
  vector<int> b(bn);
  for (size_t i = 0; i < bn; i++) {
    cin >> b[i];
  }
  size_t cn;
  cin >> cn;
  vector<int> c(cn);
  for (size_t i = 0; i < cn; i++) {
    cin >> c[i];
  }
  cout << lcs3(a, b, c) << endl;
}
