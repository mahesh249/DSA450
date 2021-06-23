// Given an array arr of size n and an integer X. 
// Find if there's a triplet in the array which sums up to the given integer X
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,sum=0,k=0;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++)
          cin>>arr[i];
        for(int i=0;i<n-2;i++)
        {
            set<int>s;
            sum = x-arr[i];
            for(int j=i+1;j<n;j++)
            {
                if(s.find(sum-arr[j])!=s.end()){
                 cout<<"Yes"<<"\n";
                 k++;
                 break;

                }
                s.insert(arr[j]);
            }
            if(k)
            break;
        }
       if(!k)
        cout<<"No"<<"\n";
    }
}