class Solution {
public:
    void sum(TreeNode* root,int low,int high,int &s)
    {
        if(root)
        {
            sum(root->left,low,high,s);
            if(root->val<=high and root->val>=low)
                s+=root->val;
            sum(root->right,low,high,s);
        }
    }
        
    int rangeSumBST(TreeNode* root, int low, int high) {
        int s=0;
        sum(root,low,high,s);
        return s;
        
   
    }
};
