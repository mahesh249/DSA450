#include<bits/stdc++.h>
using namespace std;
//Given two sorted arrays arr1[] of size N and arr2[] of size M. 
// Each array is sorted in non-decreasing order.
// Merge the two arrays into one sorted array in non-decreasing order without using any extra space.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n],brr[m];
        for(int i=0;i<n;i++)
          cin>>arr[i];
        for(int j=0;j<m;j++)
          cin>>brr[j];
        int x =n-1,y=0;
        while(x>=0 && y<m)
        {
            if(arr[x]>brr[y])
            {
                swap(arr[x],brr[y]);
                x--;
                y++;
            }
            else
            x--;
        }
        sort(arr,arr+n);
        sort(brr,brr+m);
        for(int i=0;i<n;i++)
          cout<<arr[i]<<" ";
        cout<<"\n";
        for(int j=0;j<m;j++)
         cout<<brr[j]<<" ";
        cout<<"\n" ;
    }
}