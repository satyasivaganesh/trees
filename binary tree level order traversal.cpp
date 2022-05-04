class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==NULL)return {};
        queue<TreeNode*>q;
        vector<vector<int>>ans;
        q.push(root);
        while(!q.empty())
        {
            vector<int>v;
            int l=q.size();
            for(int i=0;i<l;i++)
            {
                if(q.front()->left)
                    q.push(q.front()->left);
                if(q.front()->right)
                    q.push(q.front()->right);
                v.push_back(q.front()->val);
                q.pop();
                
            }
            ans.push_back(v);
                
        }
        return ans;
    }
};
