class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int>umap;
        for(auto it:s)
        umap[it]++;

        priority_queue<pair<int,char>>pq;

        for(auto it:umap)
        {
           // int freq=it.second;
            pq.push({it.second,it.first});
        }
        while(!pq.empty())
        {
            char ch=pq.top().second;
            int count=pq.top().first;

            while(count--)
            {
                ans+=ch;
            }
            pq.pop();
        }
        return ans;
    }
};
