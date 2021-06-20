#include<bits/stdc++.h>
using namespace std;
// Given an array Arr that contains N integers 
// (may be positive, negative or zero). 
// Find the product of the maximum product subarray.
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
        int mini=arr[0],maxi=arr[0],best = arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]<0)
              swap(mini,maxi);
            maxi = max(arr[i],maxi*arr[i]);
            mini = min(arr[i],mini*arr[i]);
            best = max(best,maxi);
        }
        cout<<best<<"\n";
    }
}