#include<bits/stdc++.h>
using namespace std;
// Write an efficient algorithm that searches for a value in an m x n matrix. 
// This matrix has the following properties:
// Integers in each row are sorted from left to right.
// The first integer of each row is greater than the last integer of the previous row.
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        if(arr[0][0]>target)
            return false;
        int ind=arr.size()-1;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i][0]==target)
                return true;
            if(arr[i][0]>target)
            {
                ind = i-1;
                break;
            }
        }
        if(binary_search(arr[ind].begin(),arr[ind].end(),target))
            return true;
        return false;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      // [
      //  [1,3,5,7],
      //  [10,11,16,20],
      //  [23,30,34,60]
      // ] 
      //  target = 3   
      // return true;
      Solution obj;
      int n,m,key,x;
      cin>>n>>m>>key;
      vector<vector<int>>v;
      for(int i=0;i<n;i++){
        vector<int>temp;
        for(int j=0;j<m;j++)
        {
          cin>>x;
          temp.push_back(x);
        }
       v.push_back(temp); 
      }
      cout<<obj.searchMatrix(v,key);
    }
    return 0;
}