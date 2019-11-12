#include <iostream>
#include <vector>

using namespace std ;
using std::cin;
using std::cout;
using std::vector;
using std::max;

int compute_min_refills(int d, int m,int n, vector<int> & stops) {
    int result =1 ,curr=0,index=0 ,next=0,ch=1;
    int refills =0 ;
    stops.push_back(d);
    if (m>=d){
        refills=0;
        ch=0;
    }
    while(true&&ch==1){
        for(int i=0;i<n;++i){
            if((curr+m) >=stops[i]){
                next=stops[i];
                index=i;
            }
        }
        curr=next;
        ++ refills;
        if ((curr+m)>=d){
           break;
        }
        if ((curr+m)<stops[index+1]){
            refills=-1;
            break;
        }
        }

    return refills ;
}

int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);


    cout << compute_min_refills(d, m,n, stops) << "\n";

    return 0;
}
