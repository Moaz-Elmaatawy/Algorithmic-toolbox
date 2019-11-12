#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> optimal_sequence(int n) {
  vector<int> sequence;
  vector<int>tries(n+1);
  tries[0]=0;tries[1]=0;tries[2]=1;tries[3]=1;
  int ans1=0,ans2=0,ans3=0;
  sequence.push_back(n);
  for(int i=4;i<=n;++i){
    ans1=9999999;ans2=9999999;ans3=9999999;
    if(i%2==0){
        ans1=1+tries[i/2];
    }
    if (i%3==0){
        ans2=1+tries[i/3];
    }
    ans3=1+tries[i-1];
    tries[i]=min(ans2,min(ans3,ans1));
  }
    cout<<tries[n]<<endl;
 ///////////////////////////////
    int n1=n;
    for (int i=tries[n];i>2;--i){
    ans1=9999999;ans2=9999999;ans3=9999999;
    if (n1%3==0){
        ans1=tries[n1/3];
    }
    if(n1%2==0){
        ans2=tries[n1/2];
    }
    ans3=tries[n1-1];
    if (ans1<ans2&&ans1<ans3){
        sequence.push_back(n1/3);
        n1=n1/3;
    }
    else if(ans2<=ans1&&ans2<ans3){
        sequence.push_back(n1/2);
        n1=n1/2;
    }
    else{
        sequence.push_back(n1-1);
        n1=n1-1;
    }
  }

  if (sequence.size()>2){
    if (sequence[sequence.size()-1]==9){
        sequence.push_back(3);
    }
    else{
        sequence.push_back(2);
    }
  }
  else{
    if (sequence[sequence.size()-1]==9){
        sequence.push_back(3);
    }
    else{
    sequence.push_back(2);
  }
  }

    sequence.push_back(1);
    reverse(sequence.begin(),sequence.end());
  return sequence;
}


int main() {
  int n;
  cin >> n;
  vector<int> sequence = optimal_sequence(n);
if(n>3){
  for (size_t i = 0; i < sequence.size(); ++i) {
    cout << sequence[i] << " ";
  }
}
else{
    if (n==1){
        cout<<"1 ";
    }
    else{
        cout<<"1 "<<n<<" ";
    }
}
}
