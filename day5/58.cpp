#include<bits/stdc++.h>
using namespace std;
// Write an efficient program to print all the duplicates and their counts in the input string 
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      string s;
      cin>>s;
      map<char,int>mp;
      for(int i=0;i<s.size();i++)
      {
          mp[s[i]]++;
      }
      for(auto x:mp)
      {
          if(x.first)
           cout<<x.first<<"->"<<x.second<<"\n";
      }
  }
}