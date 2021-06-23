#include<bits/stdc++.h>
using namespace std;
// Median of Two Sorted Arrays
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size()==0)
        {
            if(nums2.size()%2)
                return nums2[nums2.size()/2];
            else
                return (nums2[nums2.size()/2] + nums2[nums2.size()/2-1])/2.0;
        }
        if(nums2.size()==0)
        {
            if(nums1.size()%2)
                return nums1[nums1.size()/2];
            else
                return (nums1[nums1.size()/2] + nums1[nums1.size()/2-1])/2.0;
        }
        int i=nums1.size()-1,j=0,ind;
        while(j<nums2.size() && i>=0)
        {
            if(nums1[i]>nums2[j])
            {
                swap(nums1[i],nums2[j]);
                j++;
                i--;
            }
            else
                i--;
        }
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
       /* for(int i=0;i<nums1.size();i++)
            cout<<nums1[i]<<" ";
        cout<<"\n";
        for(int j=0;j<nums2.size();j++)
            cout<<nums2[j]<<" ";*/
        if((nums1.size()+nums2.size()) %2){
            ind = (nums1.size()+nums2.size()) /2;
            if(ind<nums1.size())
                return (double)nums1[ind];
           // else if(ind==nums1.size())
             //   return (double)nums2[0];
            else
            {
                ind = ind-nums1.size();
                return (double)nums2[ind];
            }
        }
        else{
            ind = (nums1.size()+nums2.size()) /2;
            if(ind<nums1.size())
                return ((nums1[ind]+nums1[ind-1])/2.0);
            else if(ind == nums1.size())
                 return ((nums1[ind-1]+nums2[0])/2.0);
            else
                 return (nums2[ind-nums1.size()]+nums2[ind-nums1.size()-1])/2.0;
            
        }
        return 0.0;
        
    }
};
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
     Solution obj;
      int n,m,x;
      cin>>n>>m;
      vector<int>v1,v2;
      for(int i=0;i<n;i++)
      {
        cin>>x;
        v1.push_back(x);
      }
      for(int j=0;j<m;j++)
      {
        cin>>x;
        v2.push_back(x);
      }
      cout<<obj.findMedianSortedArrays(v1,v2);
  }
}