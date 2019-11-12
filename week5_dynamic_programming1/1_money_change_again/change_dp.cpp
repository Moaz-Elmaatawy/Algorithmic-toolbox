#include <iostream>
#include <vector>
using namespace std;
vector<int>v(1001);
int arr[3]={1,3,4} ;
int get_change(int n) {
    int numcoins=0;

    for (int i=1;i<=n;++i){
        v[i]=9999999;
        for (int j=0;j<3;++j){
            if(i>=arr[j]){
                numcoins=v[i-arr[j]]+1;
                if(numcoins<v[i]){
                    v[i]=numcoins;
                }
            }
        }

    }

    return v[n];
}

int main() {
  int m;
  cin >> m;
  cout << get_change(m) << '\n';
}
