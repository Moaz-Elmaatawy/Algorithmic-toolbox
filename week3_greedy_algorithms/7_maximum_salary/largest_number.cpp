#include <algorithm>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std ;


void largest_number(vector<int> v ,int n) {
int max0=0 ,index=0 ,max1=0;
vector<int> b(n);
    for (int i=0 ;i<n;++i){
        if (v[i]<10){
            b[i]=v[i]*1000;
        }
        else if (v[i]<100){
            b[i]=v[i]*100;
        }
        else if(v[i]<1000){
            b[i]=v[i]*10;
        }
        else{
            b[i]=v[i];
        }
    }

    for (int i=0;i<n;++i){
            for (int j=0;j<n;++j){
                if((b[j]/1000)>max0){
                    max0=b[j]/1000;
                    max1=b[j];
                    index=j;
                }
                if((b[j]/1000)==max0){
                    if(v[j]%10>v[index]%10 && b[j]/100<b[index]/100){
                        index=j;
                    }
                    //else if (v[j]%10<v[index]%10){}
                    else {
                        //if(v[j]%10==0){
                            if((v[j]/10)%10>(v[index]/10)%10){
                                index=j;
                            }
                            else if((v[j]/10)%10 == (v[index]/10)%10){if (v[j]>v[index]){index=j;}}
                        //}
                    }
                }



                /*if((b[j]/1000)==max0){
                    if(v[j]>v[index]){
                        if((b[j]/100)%10<b[index]/1000){
                                //if(b[j]==b[index]){
                                //    index=j;
                                //}

                        }
                        else{
                            index=j;
                        }
                    }
                    else{
                        if(b[index]/1000<=(b[j]/100)%10){
                            index=j;
                        }
                        else{
                                if(b[j]==b[index]){
                                    index=j;
                                }


                        }
                    }

                    }*/
                }

            cout<<v[index];
            b[index]=-1;
            max0=0;
            index=0;

   }
}

int main() {
  int  n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < a.size(); i++) {
    cin >> a[i];
  }
  largest_number(a,n);
}
