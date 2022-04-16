class Solution {
    public TreeNode traversal(TreeNode root,int[] s)
    {
        if(root!=null)
        {
            traversal(root.right,s);
            s[0]+=root.val;
            root.val=s[0];
            traversal(root.left,s);
        }
        return root;
    }
    public TreeNode convertBST(TreeNode root) {
        int[] s={0};
        return traversal(root,s);
        
        
    }
}
