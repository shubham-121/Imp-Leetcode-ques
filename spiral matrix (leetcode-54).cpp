class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        
        vector<int>ans;
        int c=mat[0].size();     //column size
        int r=mat.size();        //rows size
        
        //using 4 pointers
        int top=0; int bottom=r-1; int left=0; int right=c-1;
        int dir=0; int i;

        // dir=0 -> left to right
        // dir=1 -> top to bottom
        // dir=2 -> right to left
        // dir=3 -> bottom to top

        while(top<=bottom && left<=right)
        {
            if(dir==0)                    //1st traversal right to left
            {
              for( i=left;i<=right;i++)
              ans.push_back(mat[top][i]);

              top++;
              }
            

             if(dir==1)                   //2nd traversal top to bottom
            {
              for( i=top;i<=bottom;i++)
              ans.push_back(mat[i][right]);

              right--;
              }
            

             if(dir==2)                 //3rd traversal left to right
            {
              for( i=right;i>=left;i--)
              ans.push_back(mat[bottom][i]);

              bottom--;
              }
            

             if(dir==3)              // 4th traversal bottom to top
            {
              for( i=bottom;i>=top;i--)
              ans.push_back(mat[i][left]);

              left++;
              }
            

            dir=(dir+1)%4;
        }
        return ans;
    }
};
