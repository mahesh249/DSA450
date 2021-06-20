#include<bits/stdc++.h>
using namespace std;
// Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
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
        int sum=0,best=INT_MIN;
        for(int i=0;i<n;i++)
        {
            sum = max(arr[i],sum+arr[i]);
            best = max(best,sum);
        }
        cout<<best<<"\n";
    }
    return 0;
}