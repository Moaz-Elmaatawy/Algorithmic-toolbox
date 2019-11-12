#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int get_majority_element(vector<int> &a, int left, int right) {
  if (left == right) return -1;
  if (left + 1 == right) return a[left];
  //write your code here
  return -1;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    cin >> a[i];
  }
  int max0=0 ,count0 =1 , max1=0 ,count1=0;
  sort(a.begin(),a.end());
  for (int i =0 ;i<a.size();++i){
    if(a[i]==a[i+1]){
        ++ count0 ;
    }
    else{
        if(count0>count1){
            max0=a[i];
            count1=count0;
        }
        count0=1;
    }
  }
  if(count1>n/2){
    cout<<"1";
  }
  else{
    cout<<"0";
  }
 // cout<<"max="<<max0<<","<<count1;
    //cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
}
