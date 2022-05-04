class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        if(root==NULL)return {};
        deque<TreeNode*>q;
        vector<vector<int>>ans;
        q.push_front(root);
        int fl=0;
        while(!q.empty())
        {
            vector<int>v;
            int l=q.size();
            for(int i=0;i<l;i++)
            {
                if(fl==0)
                {
                if(q.front()->left)
                    q.push_back(q.front()->left);
                if(q.front()->right)
                    q.push_back(q.front()->right);
                v.push_back(q.front()->val);
                q.pop_front();
                }
                else
                {
                if(q.back()->right)
                    q.push_front(q.back()->right);
                if(q.back()->left)
                    q.push_front(q.back()->left);
                v.push_back(q.back()->val);
                q.pop_back();
                }
            }
            if(fl==0)
                fl=1;
            else
                fl=0;
            ans.push_back(v);
        }
        return ans;
        
    }
};
