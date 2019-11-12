#include <iostream>
using namespace std ;


int get_change(int m) {
    int n=0, k=0,f=0,d=0;
  if(m >=10){
        k=m/10;
        n+=k;
        if ((m-10*k)>=5){
            d=(m-10*k)/5;
            n+=d;
            if ((m-10*k-5*d)>=1)
                f=(m-10*k-5*d);
                n+=f;
        }
        else{
            n+=(m-10*k);

        }
  }
  else if (m>=5){
        n=1+(m-5);

  }
  else {
    n=m;
  }

  return n;
}

int main() {
  int m;
  cin >> m;
  cout << get_change(m) << '\n';
}
