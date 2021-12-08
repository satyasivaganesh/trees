class Solution {
public:
    int left(TreeNode *temp1,int &s)
    {
        if(temp1)
        {
            left(temp1->left,s);
            left(temp1->right,s);
            s+=temp1->val;
        }
        return s;
    }
    int right(TreeNode *temp2,int &s)
    {
        if(temp2)
        {
            right(temp2->left,s);
            right(temp2->right,s);
            s+=temp2->val;
        }
        return s;
    }
    int Sum(TreeNode *root,int &sum)
    {
        TreeNode *temp1,*temp2;
        int x,y,s;
        if(root)
        {
            x=left(root->left,s=0);
            y=left(root->right,s=0);
            sum+=abs(x-y);
            Sum(root->left,sum);
            Sum(root->right,sum);
        }
        return sum;
        
    }
        
    int findTilt(TreeNode* root)
    {
        int sum;
        int z;
        z=Sum(root,sum=0);
        return z;
    }
};
