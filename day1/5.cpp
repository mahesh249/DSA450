#include<bits/stdc++.h>
using namespace std;
// program to move all elements of array in one side (left side) O(n).
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
        int s=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]<0)
            {
                swap(arr[s],arr[i]);
                s++;
            }
        }
        for(int i=0;i<n;i++)
          cout<<arr[i]<<" ";
        cout<<"\n";
    }
    return 0;
}