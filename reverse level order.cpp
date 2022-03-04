vector<int> reverseLevelOrder(Node *root)
{
    Node* x;
    vector<int>v;
    stack<int>st;
    queue<Node*>q;
    q.push(root);
    while(!q.empty())
    {
        if(q.front()->right)
            q.push(q.front()->right);
        if(q.front()->left)
            q.push(q.front()->left);
        st.push(q.front()->data);
        q.pop();
        
    }
    while(!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    return v;
}
