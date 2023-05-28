class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>umap;
        vector<int>ans;

        for(auto x:nums){
            //int key=x;
            umap[x]++;
        }

        for(auto x:umap){
            pq.push({x.second, x.first});
        }

        while(k--){
            int ele=pq.top().second;
            pq.pop();
            ans.push_back(ele);
        }
        return ans;
    }
};
