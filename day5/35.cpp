 // Chocolate Distribution Problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        int arr[n];
        for(int i=0;i<n;i++)
          cin>>arr[i];
        sort(arr,arr+n);
        int mini=1000000,diff=0;
        for(int i=0;i<=n-p;i++)
        {
          diff = arr[i+p-1]-arr[i];
          if(diff<mini)
            mini =diff;
        }
        cout<<mini<<"\n";
    }
    return 0;
}