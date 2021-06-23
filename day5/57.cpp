#include<bits/stdc++.h>
using namespace std;
// Given a string S, check if it is palindrome or not.
bool check(string s)
{
    int j=s.size()-1;
    for(int i=0;i<s.size();i++){
       if(s[i]!=s[j])
         return false;
        j--;
    }
    return true;
}
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      string s;
      cin>>s;
      cout<<check(s)<<endl;
  }
}