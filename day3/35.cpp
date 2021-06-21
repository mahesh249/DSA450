#include<bits/stdc++.h>
using namespace std;
// Given an array arr[] of N integers, calculate the median.
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
        sort(arr,arr+n);
        int mid =n/2;
		    if(n%2)
		      cout<< arr[mid]<<"\n";
		    else
		      cout<<(arr[mid]+arr[mid-1])/2<<"\n";
    }
    return 0;
}