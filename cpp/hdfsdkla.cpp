#include<iostream>
#include<math.h>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;


int main()
{
   int arr[5]={20,343,53,5,3};
   sort(arr,arr+5);
   for(int i=0;i<5;i++){
    cout<<arr[i]<<endl;
   }

}
