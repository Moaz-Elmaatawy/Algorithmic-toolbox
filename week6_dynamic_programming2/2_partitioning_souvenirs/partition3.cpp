#include <iostream>
using namespace std;

int checkPartition (int set[], int n) {
   int sum = 0;

   for (int i = 0; i < n; i++)    //find the sum of all elements of set
      sum += set[i];

   if (sum%3 != 0)     //when sum is odd, it is not divisible into two set
      return false;

   bool partTab[sum/3+1][n+1];    //create partition table
   for (int i = 0; i <= n; i++)
      partTab[0][i] = true;    //for set of zero element, all values are true

   for (int i = 1; i <= sum/3; i++)
      partTab[i][0] = false;    //as first column holds empty set, it is false

   // Fill the partition table in botton up manner
   for (int i = 1; i <= sum/3; i++)  {
      for (int j = 1; j <= n; j++)  {
         partTab[i][j] = partTab[i][j-1];
         if (i >= set[j-1])
            partTab[i][j] = partTab[i][j] || partTab[i - set[j-1]][j-1];
      }
   }

//   for (int i = 0; i <= sum/3; i++)  {
//      for (int j = 0; j <= n; j++)  {
//         cout<<partTab[i][j]<<",";
//      }
//      cout<<endl;
//   }

   return partTab[sum/3][n];
}

int main() {


   int n = 6;
   cin>>n;
   int set0[n];
   for (int i=0 ;i<n;++i){
    cin>>set0[i];
   }


   cout<<checkPartition(set0, n);

}
