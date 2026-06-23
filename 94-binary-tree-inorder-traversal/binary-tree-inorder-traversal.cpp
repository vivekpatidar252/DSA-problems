vector<int>  In(TreeNode*root , vector<int> &ans)
{


    if(root == NULL)
    return{} ;

   
    In(root->left , ans);
    ans.push_back(root->val);
    In(root->right , ans);
    return ans;
}


class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) 
    {
        vector<int> ans;
         In(root ,  ans);
         return ans;
        
    }
};