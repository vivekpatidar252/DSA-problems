vector<int>  Post(TreeNode*root , vector<int> &ans)
{


    if(root == NULL)
    return{} ;

    
    Post(root->left , ans);
    Post(root->right , ans);
    ans.push_back(root->val);
    return ans;
}


class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) 
    {
        vector<int> ans;
         Post(root ,  ans);
         return ans;
        
    }
};