class Solution {
public:
    TreeNode* traversal(TreeNode* root,int &s)
    {
        if(root)
        {
            traversal(root->right,s);
            s+=root->val;
            root->val=s;
            traversal(root->left,s);
        }
        return root;
    }
    TreeNode* convertBST(TreeNode* root) {
        int s=0;
        return traversal(root,s);
        
    }
};
