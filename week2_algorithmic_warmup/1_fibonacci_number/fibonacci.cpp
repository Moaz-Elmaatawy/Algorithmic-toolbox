#include <iostream>

using namespace std ;
/*
int fibonacci_naive(int n) {
    if (n <= 1)
        return n;

    return fibonacci_naive(n - 1) + fibonacci_naive(n - 2);
}
*/
long long fibonacci_fast(int n) {
    long long f0=0;
    long long f1=1;
    long long fn=0;
    if (n==1){
            fn=1;

    }
    else{
    for (int i =1 ;i<n;++i){
        fn=f0+f1;
        f0=f1;
        f1=fn;
    }
    }
    return fn ;
}

/*void test_solution() {
    assert(fibonacci_fast(3) == 2);
    assert(fibonacci_fast(10) == 55);
    for (int n = 0; n < 20; ++n)
        assert(fibonacci_fast(n) == fibonacci_naive(n));
}*/

int main() {
    int n ;
    cin >> n ;
    long long z=fibonacci_fast(n);

   // cout << fibonacci_naive(n) << '\n';
    //test_solution();
    cout << z<< '\n';
    return 0;
}
