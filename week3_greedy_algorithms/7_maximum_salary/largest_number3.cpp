#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std ;


void largest_number(vector<string> v ,int n) {
string max0;int index=0 ;
for (int j=0;j<n;++j){
    for (int i=0;i<n;++i){
        if (v[i][0]>max0[0]){
            max0=v[i];
            index=i;
        }
        else if (v[i][0]==max0[0]){
            if(v[i]+max0 > max0+v[i]){
                index=i;
                max0=v[i];
            }
        }
    }
    cout<<v[index];
    max0="";
    v[index]="";


}
}
int main() {
  int  n;
  cin >> n;
  vector<string> a(n);
  for (int i = 0; i < a.size(); i++) {
    cin >> a[i];
  }
  largest_number(a,n);

}
