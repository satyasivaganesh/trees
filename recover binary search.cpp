class Solution {
public:
    void inorder(TreeNode* root,vector<int>&v)
    {
        if(root)
        {
            inorder(root->left,v);
            v.push_back(root->val);
            inorder(root->right,v);
        }
        
    }
    void recover(TreeNode* root,int &ind,vector<int>&v)
    {
        if(root)
        {
            recover(root->left,ind,v);
            if(root->val!=v[ind])
                root->val=v[ind];
            ind++;
            recover(root->right,ind,v);
        }
    }
    void recoverTree(TreeNode* root) {
        vector<int>v;
        inorder(root,v);
        sort(v.begin(),v.end());
        int ind=0;
        recover(root,ind,v);
        
    }
};
