#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>
using namespace std ;

int binary2(vector<int> v,int x){
    if(binary_search(v.begin(),v.end(),x)){
        int z=lower_bound(v.begin(),v.end(),x) - v.begin();
        return z;
    }
    else{
        return -1;
    }
}
// 1 2 3 4 5 --
// 0 1 2 3 4 5

int binary(const vector<int> a, int x) {
  int left = 0, right = (int)a.size()-1;
  int mid=(right+left)/2;
  int index=0;
  while(true){
    if(a[mid]>x){
        right=mid-1;
    }
    else if(a[mid]<x){
        left=mid+1;
    }
    else{break;}

  if(mid==right||mid==left){
    mid = -1;
    break;
  }
  mid=(right+left)/2;
  }
  return mid;
}

int recursive_bs(vector<int> v,int left ,int right ,int x){
    int mid =(left+right)/2;
    if(x==v[mid]){
        return mid;
    }
    if(right<=left){
        return -1;
    }
    if (x > v[mid]){
        left =mid+1;
        return recursive_bs(v,left,right,x);
    }
   if (x<v[mid]){
        right =mid-1;
        return recursive_bs(v,left,right,x);
    }
}


int linear_search(const vector<int> &a, int x) {
  for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == x) return i;
  }
  return -1;
}
/*
//////////////////
int bi(vector<int>arr, int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return bi(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return bi(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}
*/
/////////////////////

int divideandconquar(vector<int>v,int left ,int right ,int x){
    if (left>right){
        return -1;
    }
    int mid =(left +right)/2;
    if (v[mid]==x){
        return mid;
    }
    else if(x>v[mid]){
        return divideandconquar(v,mid+1,right,x);
    }
    else{
        return divideandconquar(v,left,mid-1,x);
    }
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); i++) {
    cin >> a[i];
  }
  int m;
  cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; ++i) {
    cin >> b[i];
  }
    int left=0 ,right=b.size();
  for (int i = 0; i < m; ++i) {
    cout << divideandconquar(a,0,n-1,b[i]) << " ";
    //cout << recursive_bs(a,0,n-1,b[i]) << " ";
    //left =0;right=b.size();
  }/*
cout<<endl;
    for (int i = 0; i < m; ++i) {
    cout << binary2(a, b[i]) << " ";
    //cout << recursive_bs(a,0,n,b[i]) << " ";
    //left =0;right=b.size();
  }*/
}
