#include<bits/stdc++.h>
using namespace std;
// Given an array of size n and a number k, 
// find all elements that appear more than n/k times.
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
       unordered_map<int,int>mp;
       for(int i=0;i<n;i++)
       {
         mp[arr[i]]++;
       }
       int res = n/k;
       for(auto x:mp)
       {
         if(x.second>res)
           cout<<x.first<<" ";
       }
       cout<<"\n";
        
    }
    return 0;
}