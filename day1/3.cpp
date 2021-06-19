#include<bits/stdc++.h>
using namespace std;
// program to find kth max and min element.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
          cin>>arr[i];
        sort(arr,arr+n);
        cout<<arr[k-1]<<"\n";
        cout<<arr[n-k]<<"\n";

    }
    return 0;
}