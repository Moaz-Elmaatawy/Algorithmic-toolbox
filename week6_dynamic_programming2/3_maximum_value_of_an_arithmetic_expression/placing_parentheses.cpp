#include <iostream>
#include <cassert>
#include <string>
#include <vector>
#include <sstream>
using namespace std ;
/*
long long math(long a ,char b,long c){
    if (b=="+"){
        return a+c;
    }
    else if(b=="-"){
        return a-c;
    }
    else{
        return a*b;
    }
}*/

long long math(long long a, string op ,long long b) {
  if (op == "*") {
    return a * b;
  } else if (op == "+") {
    return a + b;
  } else if (op == "-") {
    return a - b;
  } else {
    assert(0);
  }
}

long long get_maximum_value( string exp) {
    int n= ((exp.size()-1)/2) +1;
    int num [n];
    string op [n-1];
    int j=0;
    for (int i=0;i<exp.size();++i){
        if(i%2==0){
            num[j]=exp[i]-'0';
        }
        else{
            op[j]=exp[i];
            ++j;
        }
    }
///////////////////////////////////////////////
int m[n][n];
int M[n][n];
j=0;
for(int i=0;i<n;++i){
    m[i][i]=num[j];
    M[i][i]=num[j];
    ++j;
}
///////////////////
for (int s=1;s<=n-1;++s){
    for(int i=1;i<=n-s;++i){
        j=i+s;
        int min0=INT_MAX;
        int max0 =INT_MIN;
        for (int k=i;i<j-1;++k){
            int a=math(M[i][k],op[k],M[k+1][j]);
            int b=math(M[i][k],op[k],m[k+1][j]);
            int c=math(m[i][k],op[k],M[k+1][j]);
            int d=math(m[i][k],op[k],m[k+1][j]);
            min0=min(min0,min(a,min(b,min(c,d))));
            max0=max(max0,max(a,max(b,max(c,d))));
        }
        m[i][j]=min0;
        M[i][j]=max0;
            }
        }
////////////////////////////////////////////

cout<<n<<endl;
for (int i=0;i<=n;++i){
    for(int j=0;j<n;++j){
        cout<<m[i][j]<<",";
    }cout<<endl;
}
return M[1][n];
}





int main() {
  string s;
  cin >> s;
  cout << get_maximum_value(s) << '\n';

}
