class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n=nums.size();          //using kadane's algorithm
        int maxi=INT_MIN;
        int sum=0;

        for(int i=0; i<n; i++)
        {
            sum+= nums[i];

            if(sum> maxi)
            maxi=sum;

            if(sum < 0)
            sum=0;
        }
        return maxi;

        if(maxi<0)
        return -1;

        // ***brute force solution***

        // int maxi=0;
        // for(int i=0;i<nums.size();i++)
        // {
        //     int sum=0;
        //     for(int j=i;j<nums.size();j++)
        //     {
        //         sum+= nums[j];
        //         maxi=max(sum, maxi);
        //     }
        // }
        // if(maxi<0)
        // return -1;
        
        // return maxi;
    }
};



