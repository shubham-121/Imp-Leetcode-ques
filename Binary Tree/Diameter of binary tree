class Solution {
public:
int ans=0;

int height(TreeNode* root)
{                                   //O(n)
    if(root==NULL)
    return 0;

    int lh=height(root->left);
    int rh=height(root->right);
    
    ans=max(ans,1+lh+rh);
    return 1+max(lh,rh);
}
    int diameterOfBinaryTree(TreeNode* root) {
        // if(root==NULL)                 O(n2)
        // return 0;

        // int d1=1+height(root->left)+height(root->right);

        // int d2= diameterOfBinaryTree(root->left);
        // int d3= diameterOfBinaryTree(root->right);

        // return max({d1,d2,d3})-1;

       int data=height(root);
       return ans-1;
          


    }
};
