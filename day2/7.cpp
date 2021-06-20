#include<bits/stdc++.h>
using namespace std;
//Given an array, rotate the array by one position in clock-wise direction.
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
        int temp = arr[n-1];
        for(int i=n-1;i>0;i--)
        {
            arr[i] = arr[i-1];
        }
        arr[0] = temp;
        for(int i=0;i<n;i++)
          cout<<arr[i]<<" ";
        cout<<"\n";
    }
    return 0;
}