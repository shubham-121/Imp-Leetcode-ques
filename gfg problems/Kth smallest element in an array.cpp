class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int K) {
        //code here
         priority_queue<int>pq;
        int x=0;
        for(int i=l;i<=r;i++){
            pq.push(arr[i]);
            
            if(pq.size()>K){
                x=pq.top();
                pq.pop();
            }
        }
        return pq.top();
    }
};
