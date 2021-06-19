#include<bits/stdc++.h>
using namespace std;
// program to find minimum and maximum in array O(n).
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
        int minimum = arr[0], maxiimum = arr[0];
        for(int i=0;i<n;i++)
        {
            if(arr[i]<minimum)
              minimum = arr[i];
            if(arr[i]>maxiimum)
              maxiimum=arr[i];
        }
        cout<<minimum<<" "<<maxiimum<<"\n"; 
    }
    return 0;
}