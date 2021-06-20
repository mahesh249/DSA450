#include<bits/stdc++.h>
using namespace std;
//Given an array of integers nums containing n + 1 integers 
//where each integer is in the range [1, n] inclusive.
//There is only one repeated number in nums, return this repeated number.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=0;i<n+1;i++)
          cin>>arr[i];
        //first approach using O(n) space
        int c=0,temp[n+1]={0};
        for(int i=0;i<n+1;i++)
        {
            if(temp[arr[i]])
            {
                cout<<arr[i]<<"\n";
                c++;
                break;
            }
            else
              temp[arr[i]]++;
        }
        if(!c)
         cout<<"-1"<<"\n";

        //two pointer method O(1) space 
        if(n>1)
        {
            int slow = arr[0];
            int fast = arr[arr[0]];
            while(slow!=fast)
            {
                slow = arr[slow];
                fast = arr[arr[fast]];
            }
            fast =0;
            while(slow!=fast)
            {
                slow = arr[slow];
                fast = arr[fast];
            }
            cout<<slow<<"\n";
        }
    }
    return 0;
}