#include <iostream>
using namespace std ;
/*
long long get_fibonacci_huge_naive(long long n, long long m) {
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current  = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }

    return current % m;
}*/



int patt (long long  m,int n) {
    long long p0=0;
    long long p1=1;
    long long pn=0;
    int mm=0;
    int patt[10000];
    while(true){
        patt[mm]=p0%n;
        ++ mm;
        cout<<p0%n<<endl;
        pn=(p0+p1)%n;
        p0=p1;
        p1=pn;
        if(pn==1&p1==1&p0==0){
            break;
        }
    }
    int f =int (patt[m%mm]);
    cout<<f<<endl;
    return 0 ;

}

int main() {
    long long n, m;
    cin >> n >> m;
   // cout << get_fibonacci_huge_naive(n, m) << '\n';
    patt(n,m);

}
