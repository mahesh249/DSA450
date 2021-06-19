#include<bits/stdc++.h>
using namespace std;
// program to unioun and intersection of two array.
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
        int s=0,e=0;
        while(s<n && e<m)
        {
            if(arr[s]<brr[e])
            {
                cout<<arr[s]<<" ";
                s++;
            }
            else if(arr[s]>brr[e])
            {
                cout<<brr[e]<<" ";
                e++;
            }
            else{
                cout<<arr[s]<<" ";
                s++;e++;
            }
        }
        while(s<n)
          cout<<arr[s++]<<" ";
        while(e<m)
         cout<<brr[e++]<<" ";
        cout<<"\n";
        cout<<"Intersection of two array :\n";
        int a,b;
        cin>>a>>b;
        int aaa[a],bbb[b];
        for(int i=0;i<a;i++)
          cin>>aaa[i];
        for(int j=0;j<b;j++)
          cin>>bbb[j];
        int ss=0,ee=0;
         while(ss<a && ee<b)
        {
            if(aaa[ss]<bbb[ee])
            {
                ss++;
            }
            else if(aaa[ss]>bbb[ee])
            {
                ee++;
            }
            else{
                cout<<aaa[ss]<<" ";
                ss++;ee++;
            }
        }

    }

    return 0;
}