class Solution {
public:
    vector<int> t;
    vector<int> preorderTraversal(TreeNode* root) {
        
        
        if(root==NULL){
            return t;    
        }
        
        t.push_back(root ->val);
            preorderTraversal(root ->left);
            preorderTraversal(root ->right);
        
        return t;
        
        
    }
};
