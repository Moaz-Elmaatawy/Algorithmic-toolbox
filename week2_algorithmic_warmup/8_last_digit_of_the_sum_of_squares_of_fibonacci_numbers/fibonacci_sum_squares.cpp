#include <iostream>
using namespace std;
int fibonacci_sum_squares_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current * current;
    }

    return sum % 10;
}

int patt (long long  m) {
    long long p0=0;
    long long p1=1;
    long long pn=0,k=0;
    int mm=0;
    int patt[10000];
    while(true){
        k=k+(p0*p0)%10 ;
        patt[mm]=k;
        ++ mm;
        //cout<<(p0*p0)%10<<endl;
        pn=(p0+p1)%10;
        p0=p1;
        p1=pn;
        if(p1==1&p0==0){
            break;
        }
    }
    int f =(patt[m%mm]);
    cout<<f%10<<endl;
    return 0 ;

}

int main() {
    long long n = 0;
    cin >> n;
   //cout << fibonacci_sum_squares_naive(n)<<endl;
    patt(n);
   }
