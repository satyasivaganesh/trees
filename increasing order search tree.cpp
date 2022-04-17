class Solution {
public:
    vector<TreeNode*> tree(TreeNode* root,vector<TreeNode*>&v)
    {
        if(root)
        {
            tree(root->left,v);
            v.push_back(root);
            tree(root->right,v);
        }
        return v;
        
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<TreeNode*>v;
        vector<TreeNode*>x=tree(root,v);
        TreeNode *root1,*temp;
        root1=v[0];
        root1->left=NULL;
        temp=root1;
        for(int i=1;i<v.size();i++)
        {
            temp->right=v[i];
            temp=temp->right;
            temp->left=NULL;
        }
        return root1;
        
        
    }
};
