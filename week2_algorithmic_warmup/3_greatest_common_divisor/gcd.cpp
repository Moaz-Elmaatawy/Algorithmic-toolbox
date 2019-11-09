#include <iostream>
using namespace std ;
/*
int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}*/

long long fast(long long a ,long long b){
    while(true){
        long long c=a%b;
        a=b;
        b=c;
        if (c==0){break;}
    }
    return a;
}

int main() {
  long long a, b;
  cin >> a >> b;
  //cout << gcd_naive(a, b) << endl;
  cout<< fast(a,b);
  return 0;
}
