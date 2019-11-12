#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std ;


void largest_number(vector<string> v ,int n) {
string max0;int index=0 ,max1=0;
for (int j=0;j<n;++j){
    for (int i=0;i<n;++i){
        if (v[i][0]>max0[0]){
            max0=v[i];
            index=i;
        }
        else if (v[i][0]==max0[0]){
                if(v[i].size()>max0.size()){if(v[i][v[i].size()-1]>max0[max0.size()-1]){index=1;max0=v[i];}}
                else if(v[i].size()<max0.size()){if(max0[max0.size()-1]>v[i][v[i].size()-1]){}else{index=i;max0=v[i];}}
                else{
                    if(v[i][1]>max0[1]){
                        index=i;
                        max0=v[i];
                    }
                    else if(v[i][1]==max0[1]){
                        if(v[i][2]>max0[2]){
                        index=i;
                        max0=v[i];
                        }
                    }
                }
        }
    }
    cout<<v[index];
    max0="";
    v[index]="";
}

}

int main() {
  /*int  n;
  cin >> n;
  vector<string> a(n);
  for (int i = 0; i < a.size(); i++) {
    cin >> a[i];
  }*/
  //largest_number(a,n);
  if("20" < "21" ){cout<<"yes";}
  else{cout<<"nop";}
}
