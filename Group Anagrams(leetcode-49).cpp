class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map < string, vector<string>> umap;
        vector<vector<string>>ans;

        for(auto x:strs){
            auto temp=x;
            sort(x.begin(),x.end());

            umap[x].push_back(temp);

        }
        for(auto it:umap){
            // vector<string>temp=x.second;
            // ans.push_back(temp);

            ans.push_back(it.second);
        }
        return ans;
    }
};
