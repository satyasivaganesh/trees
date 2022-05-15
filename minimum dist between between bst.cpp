class Solution {
public:
    vector<int>v;
    int minDiffInBST(TreeNode* root) {
        if(root)
        {
     
            minDiffInBST(root->left);
            v.push_back(root->val);
            minDiffInBST(root->right);
            
        }
        int d=INT_MAX;
        for(int i=1;i<v.size();i++)
            if(v[i]-v[i-1]<d)d=v[i]-v[i-1];
        return d;
        
    }
};
