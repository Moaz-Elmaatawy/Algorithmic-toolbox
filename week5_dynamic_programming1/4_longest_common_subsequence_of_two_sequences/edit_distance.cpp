#include <iostream>
#include <string>
#include<vector>
#include<string>
using namespace std;

int edit_distance(const string &str1, const string &str2) {
  int n=str1.size();
  int m= str2.size();
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
        if(str2[j-1]==str1[i-1]){
            d[i][j]=max(match,max(ins,del));
        }
        else{
            d[i][j]=max(mis,max(ins,del));
        }
    }
  }


for (int i=0;i<=n;++i){
   for(int j=0;j<=m;++j){
       cout<<d[i][j]<<",";
   }cout<<endl;}

  return d[n][m];

}

int main() {
  string str1;
  string str2;
  cin >> str1 >> str2;
  cout << edit_distance(str1, str2) << endl;
  return 0;
}
