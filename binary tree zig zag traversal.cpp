/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        
        
        *** 2 ways***
        
        
        // stack<TreeNode*>s1,s2;
        // vector<vector<int>>ans;
        // if(root==NULL)
        // return ans;
        // s1.push(root);
        
        // while(!s1.empty()  ||  !s2.empty())
        // {
        //     while(!s1.empty())
        //     {
        //         root=s1.pop();
        //         ans.push_back(root);

        //         if(root->right!=NULL)
        //         s2.push(root->right);

        //         if(root->left!=NULL)
        //         s2.push(root->left)
        //     }

        //     while(!s2.empty())
        //     {
        //         root=s2.pop();
        //         ans.push_back(root);

        //          if(root->right!=NULL)
        //         s1.push(root->right);

        //         if(root->left!=NULL)
        //         s1.push(root->left)

        //     }

        // }
        // return ans;


        vector<vector<int>>ans;
        queue<TreeNode*>q;
        int count=0;

        q.push(root);
        if(root==NULL)
        return ans;

      

        while(1)
        {
            int size=q.size();
            vector<int>data;

            if(size==0)
            return ans;

          count++;

            while(size>0)
            {
            TreeNode* temp=q.front();
            q.pop();
            data.push_back(temp->val);

            if(temp->left!=NULL)
            q.push(temp->left);

            if(temp->right!=NULL)
            q.push(temp->right);

            size--;
            }
            if(count%2==0)
            reverse(data.begin(),data.end());
             ans.push_back(data);

        }
        return ans;

    }
};
