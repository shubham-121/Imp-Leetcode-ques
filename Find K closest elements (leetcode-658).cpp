typedef pair<int,int>pi;

class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        priority_queue<pi, vector<pi>, greater<pi>>pq;

        vector<int>ans;
        vector<int>diff;

        for(auto minus:arr){
            int difference=abs(x-minus);
            diff.push_back(difference);
        }

        for(int i=0;i<arr.size();i++){
            pq.push({diff[i], arr[i]});
        }

        while(k--){
            int item=pq.top().second;
            pq.pop();
            ans.push_back(item);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
