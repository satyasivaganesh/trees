class Solution {
public:
    vector<int>v;
    bool isValidBST(TreeNode* root) {
        if(root)
        {
            isValidBST(root->left);
            v.push_back(root->val);
            isValidBST(root->right);
        }
        for(int i=1;i<v.size();i++)
        {
            if(v[i]<=v[i-1]) return 0;
        }
        return 1;
    }
};
