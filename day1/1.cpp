#include<bits/stdc++.h>
using namespace std;
// program to reverse a array O(n).
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
        int start=0,end=n-1;
        while(start<end)
        {
            int t = arr[start];
            arr[start] = arr[end];
            arr[end] = t;
            start++;
            end--;
        }
        for(int i=0;i<n;i++)
          cout<<arr[i]<<" ";
        cout<<"\n";
    }
    return 0;
}