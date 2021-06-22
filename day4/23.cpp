#include<bits/stdc++.h>
using namespace std;
// Given an array of N integers, and an integer K, 
// find the number of pairs of elements in the array whose sum is equal to K.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,sum;
       cin>>n>>sum;
       int arr[n];
       for(int i=0;i<n;i++)
        cin>>arr[i];
       unordered_map<int,int>mp;
       for(int i=0;i<n;i++)
        mp[arr[i]]++;
       int c=0;
       for(int i=0;i<n;i++)
       {
         c+=mp[sum-arr[i]];
         if(sum-arr[i]==arr[i])
          c--;
       }
       cout<<c/2<<"\n";
    }
    return 0;
}