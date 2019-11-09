#include <iostream>
using namespace std ;
/*
long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
} */

long long fast(long long z ,long long y){
    long long a=z,b=y;
    if (a==0||b==0){
        return a=0 ;

    }
    else{
    while(true){
        long long c=a%b;
        a=b;
        b=c;
        if (c==0){break;}
    }
    long long k=(z/a)*y;
    return k;
}
}
int main() {
  long long  a, b;
  cin >> a >> b;
  //cout << lcm_naive(a, b) << endl;
  cout<<fast(a,b);

  return 0;
}
