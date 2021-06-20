#include<bits/stdc++.h>
using namespace std;
//Implement next permutation, which rearranges numbers 
//into the lexicographically next greater permutation of numbers.
// If such an arrangement is not possible,
// it must rearrange it as the lowest possible order (i.e., sorted in ascending order).
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int nums[n];
        for(int i=0;i<n;i++)
          cin>>nums[i];
        bool b=true;
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1]);
            else
            {
                b = false;
                break;
            }
        }
        if(b)
        {
            sort(nums,nums+n);
        }
        else{
            int c=0;
            do{
                if(c==1)
                    break;
                c++;
            }while(next_permutation(nums,nums+n));
        }
        for(int i=0;i<n;i++)
          cout<<nums[i]<<" ";
        cout<<"\n";
    }
}