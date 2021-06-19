#include<bits/stdc++.h>
using namespace std;
// program to sort the array of 0,1,2 without using any sorting algorithm
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int arr[n];
       for(int i=0;i<n;i++)
         cin>>arr[i];
       int low=0,high=n-1,mid=0;
       while(mid<=high){
           if(arr[mid]==1)
             mid++;
           else if(arr[mid]==0)
           {
               swap(arr[mid],arr[low]);
               mid++;
               low++;
           }
           else
           {
               swap(arr[mid],arr[high]);
               high--;
           }
       }
       for(int i=0;i<n;i++)
         cout<<arr[i]<<" ";
        cout<<"\n";
    }
    return 0;
}