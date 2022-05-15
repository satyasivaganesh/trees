class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        if(root==NULL)return 0;
        queue<TreeNode*>q;
        int s;
        q.push(root);
        while(!q.empty())
        {
            s=0;
            int l=q.size();
            for(int i=0;i<l;i++)
            {
                if(q.front()->left)
                    q.push(q.front()->left);
                if(q.front()->right)
                    q.push(q.front()->right);
                s+=q.front()->val;
                q.pop();
            }
            
        }
        return s;
        
    }
};
