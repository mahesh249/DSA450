#include<bits/stdc++.h>
using namespace std;
// Given a sequence of strings, the task is to find out 
// the second most repeated (or frequent) string in the given sequence.
// Note: No two strings are the second most repeated, 
// there will be always a single string
string secFrequent (string arr[], int n)
    {
        //code here.
        string res;int maxi=0;
        map<string,int>mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            if(mp[arr[i]]>maxi)
            {
                maxi = mp[arr[i]];
                res = arr[i];
            }
        }
        int mm=0;string fin;
        for(auto x:mp)
            if(x.second<maxi){
                if(x.second>mm){
                mm = max(x.second,mm);
                fin = x.first;
                }
            }
        return fin;
    }
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    cout<<secFrequent(arr,n);
  }
}