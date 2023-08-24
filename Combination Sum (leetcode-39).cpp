class Solution {
public:
    void func(int indx, int target, vector<vector<int>>&ans, vector<int>&ds, vector<int>& arr)
    {
        if(indx==arr.size())
        {
            if(target==0)
            ans.push_back(ds);
        
        return;
        }

        if(arr[indx]<=target)
        {
            ds.push_back(arr[indx]);
            func(indx,target-arr[indx],ans,ds,arr);
            ds.pop_back();
        }
        func(indx+1,target,ans,ds,arr);

        
    }
    
    
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        
        int indx=0;
        vector<int>ds; vector<vector<int>>ans; 
        // int n=arr.size()-1;
        func(indx, target, ans, ds,arr);
        return ans;
    }
};
