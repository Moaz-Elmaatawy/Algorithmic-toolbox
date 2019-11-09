#include <iostream>
#include<cstdlib>
using namespace std ;

long long result,n ,m1=0,m2=0,index=0,result2=0 , z=0;
long long alg1(long long a[]);
int alg2(long long b[]);

///////////////////////////////////
int main() {
    while(true){
    n= rand()%1000+2;
    //cout<<"n = "<<n;
    long long arr[n]={0};
    for (long long i =0 ;i<n; ++i){
        arr[n]=rand()%1000000 ;
    }
    alg1(arr);
    alg2(arr);
    if(result==result2){
        cout<<"OK "<<endl;
    }
    else{
        cout<<"wrong answer \n";
        break;

    }
}
return 0;
}

//////////////functions///////////
long long alg1(long long a[]){
    for (long long i =0 ;i<n;++i){
            if (a[i]>m1){
                m1=a[i];
                index=i;
            }
    }
    z=a[index];
    a[index]=a[0];
    a[0]=z;

    for (long long i =1 ;i<n;++i){
            if (a[i]>m2){
                m2=a[i];
                index=i;
            }
    }
    result = m1*m2 ;
    //cout<<m1<<","<<m2;
    return result ;
}

int alg2(long long b[]){
    for(int i=0;i<n;++i){
        for(int j=0; j<n;++j){
            if(i!=j){
                if(b[i]*b[j]>result2){
                        result2=b[i]*b[j];
                }
            }
        }
    }
  //  cout<<"          "<<result2;
    return result2;
}
