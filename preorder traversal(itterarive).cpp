class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        vector<int>v;
        stack<Node*>st;
        Node* x;
        st.push(root);
        while(!st.empty())
        {
            x=st.top();
            st.pop();
            if(x->right!=NULL)st.push(x->right);
            if(x->left!=NULL)st.push(x->left);
            v.push_back(x->data);
        }
    return v;
    }
};
