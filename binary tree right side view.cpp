class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        if(root==NULL)return {};
        vector<int>v;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int l=q.size();
            for(int i=0;i<l;i++)
            {
                if(q.front()->left)
                    q.push(q.front()->left);
                if(q.front()->right)
                    q.push(q.front()->right);
                if(i==l-1)
                    v.push_back(q.front()->val);
                q.pop();
            }
        }
        return v;
        
    }
};
