#include <iostream>
using namespace std ;

int fibonacci_sum_naive(long long n) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;
    long long sum      = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10;
}

int patt (long long  m) {
    long long p0=0;
    long long p1=1;
    long long pn=0;
    int mm=0,k=0;
    int patt[10000];
    while(true){
        k=k+(p0%10);
        patt[mm]=k;
        ++ mm;
        //cout<<k<<endl;
        pn=(p0+p1)%10;
        p0=p1;
        p1=pn;

        if(pn==1&p1==1&p0==0){
            break;
        }
    }
    int f =int(patt[m%mm]%10);
    cout<<f<<endl;
    return 0 ;

}


int main() {
    long long n = 0;
    int x=0 ,y=0 ,z=0,count1;
    cin>> n;
    //fibonacci_sum_naive(n);
    patt(n);

}
