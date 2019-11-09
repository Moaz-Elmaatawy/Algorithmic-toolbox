#include <iostream>
#include <vector>
using namespace std ;
using std::vector;
/*
long long get_fibonacci_partial_sum_naive(long long from, long long to) {
    long long sum = 0;

    long long current = 0;
    long long next  = 1;

    for (long long i = 0; i <= to; ++i) {
        if (i >= from) {
            sum += current;
        }

        long long new_current = next;
        next = next + current;
        current = new_current;
    }

    return sum % 10;
} */


int patt (long long  m ,long long s) {
    //if(s>m){long long d=s;s=m;m=d; }
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
    int big =patt[s%mm];
    int small=patt[(m-1)%mm];
   // if(big>100&small<100&small>10){big=big-10;}
    //else if(big>100&small<10){big=big-100;}
    if(big<100&small>100&big>10){small=small-100;}
    long f =(big-small)%10;

    cout<<f<<endl;
    //cout<<patt[(m-1)%mm]<<","<<patt[s%mm];
    return 0 ;

}


int main() {
    long long from, to;
    cin >> from >> to;
    //cout << get_fibonacci_partial_sum_naive(from, to) << '\n';
    patt(from ,to );
}

