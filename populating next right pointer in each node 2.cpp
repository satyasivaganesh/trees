class Solution {
public:
    Node* connect(Node* root) {
        queue<Node*>q;
        q.push(root);
        Node* x;
        if(root==NULL)return root;
        while(!q.empty())
        {
            int l=q.size();
            for(int i=0;i<l;i++)
            {
                x=q.front();
                q.pop();
                {
                    x->next=q.front();
                }
                if(x->left)
                    q.push(x->left);
                if(x->right)
                    q.push(x->right);
            }
            x->next=NULL;
        }
        return root;
        
    }
};
