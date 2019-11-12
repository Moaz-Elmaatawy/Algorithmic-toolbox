#include <iostream>
#include <vector>

using namespace std ;

int sum (int n){
    int i=0,sum =0;
    vector<int> num ;
    while(true){
        ++i;
        num.push_back(i);
        sum = sum+i;
        if (sum>n){
            break;
        }
    }
    num.pop_back();
    num[i-2]+=(n-(sum-num[i-1]));
    num.pop_back();
    cout<<(i-1)<<endl;
    for (int j=0;j<=num.size();++j){
      cout<<num[j]<<" ";
    }
return 0;
}




int main() {
  long long  n;
  cin >> n;
  sum(n);
}
