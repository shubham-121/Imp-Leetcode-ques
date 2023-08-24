class Solution {
public:
    void func(vector<int>& nums, int indx, vector<vector<int>>&ans) //using swap method for permutations
    {
         if(indx==nums.size())
         {
             ans.push_back(nums);
             return;
         }

         for(int i=indx;i<nums.size();i++)
         {
             swap(nums[indx], nums[i]);
             func(nums, indx+1, ans);
             swap(nums[indx], nums[i]);
         }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int indx=0;
        func(nums, indx, ans);
        return ans;
    }
};


/*class Solution {  // using a map and a ds for storing the data
public:
void func(vector<int>&ds,int freq[], vector<int>&nums, vector<vector<int>>&ans)
{
if(ds.size()==nums.size())
{
ans.push_back(ds);
return;
}

for(int i=0;i<nums.size();i++)
{
if(!freq[i])
{
ds.push_back(nums[i]);
freq[i]=1;

func(ds,freq,nums,ans);
freq[i]=0;
ds.pop_back();
}

}
}
vector<vector<int>> permute(vector<int>& nums) {
vector<int>ds;
vector<vector<int>>ans;
int freq[nums.size()];

if(nums.size()==1)
{
ds.push_back(nums[0]);
ans.push_back(ds);
return ans;
}
for(int i=0;i<nums.size();i++)
freq[i]=0;
func(ds,freq,nums,ans);

return ans;
}
};*/
