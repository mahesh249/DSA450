#include<bits/stdc++.h>
using namespace std;
// Best Time to Buy and Sell Stock
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
       int mini = arr[0],maxi=0;
       for(int i=1;i<n;i++)
       {
         if(arr[i]<mini)
           mini = arr[i];
          else{
            maxi = max(maxi,arr[i]-mini);
          }
       }
       cout<<maxi<<"\n";
        
    }
    return 0;
}