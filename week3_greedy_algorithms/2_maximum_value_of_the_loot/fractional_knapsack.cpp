#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
using std::vector;

double get_optimal_value(int capacity,int n, vector<int> weights, vector<int> values) {
  double value = 0.0;
  double max0 = 0.0 ;
  int index=0;
  vector<double> price;
  for (int i =0 ; i<n;++i){
    price.push_back( ((double) values[i]/ (double) weights[i])) ;
  }
int j=0;
  while (j< n ){
    ++j;
  for (int i =0 ;i< n; ++i){
    if (price[i]>max0){
        max0=price[i];
        index=i;
    }
  }
if (weights[index]>capacity){
    value=value+capacity*price[index];
    break ;
}
else{
    value=value+values[index];
    capacity -=weights[index];
    price[index]=0;
    max0=0;
}
  }
  // write your code here

  return value;
}

int main() {
  int n;
  int capacity;
  cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, n,weights, values);

  cout.precision(20);
  cout << optimal_value/3 << endl;
  return 0;
}
