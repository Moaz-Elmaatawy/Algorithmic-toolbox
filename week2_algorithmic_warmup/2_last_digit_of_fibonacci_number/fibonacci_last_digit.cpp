#include <iostream>
using namespace std;
/*int get_fibonacci_last_digit_naive(int n) {
    if (n <= 1)
        return n;

    int previous = 0;
    int current  = 1;

    for (int i = 0; i < n - 1; ++i) {
        int tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
    }
    cout<<current<<"\n2";
    return current % 10;
}*/

int fast(int n){
    int f0=0;    int f1=1;    int fn=0;
    if (n==1){
            fn=1;
    }
    else{
        for (int i =1 ;i<n;++i){
            fn=f0+f1;
            f0=f1%10;
            f1=fn%10;
        }
    }
    return fn%10 ;
}

int main() {
    int n;
    cin >> n;
    //int c = get_fibonacci_last_digit_naive(n);
    int z =fast(n);
    //cout << c << '\n';
    cout<<z<<endl;
    }
