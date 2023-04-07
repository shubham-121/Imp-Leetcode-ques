class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
    
      //creating 2 vectors. x[] for rows and y[] for columns
      
        vector<int>x,y;    

        int n=mat.size();
        int m=mat[0].size();

      //store indexes of the zero position in both the vectors
        for(int i=0;i<n;i++)      
        {
            for(int j=0;j<m;j++)
            if(mat[i][j]==0)
            {
                x.push_back(i);
                y.push_back(j);
            }
        }


        //set the entire row to zeroes
        for(int i=0;i<x.size();i++)   
        {
            int index=x[i];

            for(int j=0;j<m;j++)
            mat[index][j]=0;
        }


        //set the entire column to zeroes
        for(int i=0;i<y.size();i++)
        {
            int index=y[i];
            
            for(int j=0;j<n;j++)
            mat[j][index]=0;
        }
    }
};
