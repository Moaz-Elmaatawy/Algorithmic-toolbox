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
    d[i][0]=i;
  }
    for (int i=0;i<=m;++i){
    d[0][i]=i;
  }



  for (int j=1;j<=m;++j){
    for(int i=1;i<=n;++i){
        int ins = d[i][j-1] +1;
        int del=d[i-1][j] +1;
        int match =d[i-1][j-1];
        int mis=d[i-1][j-1] +1;
        if(str2[j-1]==str1[i-1]){
            d[i][j]=min(match,min(ins,del));
        }
        else{
            d[i][j]=min(mis,min(ins,del));
        }
    }
  }

  for (int i=0;i<=n;++i){
   for(int j=0;j<=m;++j){
       cout<<d[i][j]<<",";
   }cout<<endl;}

  string v1[100];
  string v2[100];
  int k=0;
  int i=n,j=m;
  while(i>=0&&j>=0){
        if(d[i-1][j-1]<=d[i-1][j]&&d[i-1][j-1]<=d[i][j-1]){
            v1[k]=(str1[i-1]);
            v2[k]=(str2[j-1]);
            ++k;
            --j;
            --i;
        }
        else if(d[i-1][j]<=d[i-1][j-1]&&d[i-1][j]<=d[i][j-1]){
            v1[k]=(str1[i-1]);
            v2[k]=("-");
            ++k;
            --i;
        }
        else{
            v1[k]=("-");
            v2[k]=(str2[j-1]);
            ++k;
            --j;
        }

  }
for(int i=10;i>=0;--i){
    cout<<v1[i];
}
cout<<endl;
for(int i=10;i>=0;--i){
    cout<<v2[i];
}
cout<<endl;
//for (int i=0;i<=n;++i){
//   for(int j=0;j<=m;++j){
//       cout<<d[i][j]<<",";
//   }cout<<endl;}

  return d[n][m];

}

int main() {
  string str1;
  string str2;
  cin >> str1 >> str2;
  cout << edit_distance(str1, str2) << endl;
  return 0;
}
