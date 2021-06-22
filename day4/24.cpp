#include<bits/stdc++.h>
using namespace std;
// Given an array of positive integers. 
// Find the length of the longest sub-sequence such that
// elements in the subsequence are consecutive integers, the consecutive numbers can be in any order.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
          cin>>arr[i];
         set<int>s;vector<int>v;
        for(int i=0;i<n;i++)
          s.insert(arr[i]);
        for(auto x:s)
        v.push_back(x);
        int c=1,maxi=0;
        for(int i=0;i<v.size()-1;i++)
        {
          if(v[i]+1 == v[i+1])
            c++;
          else{
              maxi = max(c,maxi);
              c=1;
          }
        }
        maxi = max(c,maxi);
        cout<<maxi<<"\n";
    }

    return 0;
}