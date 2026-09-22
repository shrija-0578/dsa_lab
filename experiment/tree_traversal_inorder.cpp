#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(){
        val=0;
        left=nullptr;   
        right=nullptr;
    }
    TreeNode(int x){
        
        val=x;
        left=nullptr;   
        right=nullptr;
    }
    TreeNode(int x, TreeNode *left, TreeNode *right) {
        val = x;
        this->left = left;
        this->right = right;
    }
};

// void inorderTraversal(TreeNode* root, vector<int>& result) {
//     if (root == nullptr) {
//         return;
//     }
//     inorderTraversal(root->left, result);
//     result.push_back(root->val);
//     inorderTraversal(root->right, result);
// }

// vector<int> inorderTraversal(TreeNode* root) {
//     vector<int> result;
//     inorderTraversal(root, result);
//     return result;
// }
// vector<int> inorderTraversal(TreeNode* root){
//     vector<int> result;
//     stack<TreeNode*> st;
//     TreeNode* cur = root;
//     while(cur!=nullptr || !st.empty()){
//         while(cur!=nullptr){
//             st.push(cur);   //1
//             cur=cur->left;
//         }
//         cur=st.top();    //2
//         st.pop();
//         result.push_back(cur->val);
//         if(cur->right==nullptr){
//             cur=st.top();
//             st.pop();
//         }
//         else {
//             cur=cur->right;
//         }


//     }
//     return result;
// }
vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    stack<TreeNode*> st;
    TreeNode* cur = root;
    
    while(cur != nullptr || !st.empty()) {
        while(cur != nullptr) {
            st.push(cur);   
            cur = cur->left;
        }
        
        cur = st.top();    
        st.pop();
        result.push_back(cur->val);
        cur = cur->right; 
    }
    return result;
}


// vector<int> inorderTraversal(TreeNode* root){
//     vector<int> result;
//     map<TreeNode*,int> mp;
//     TreeNode* current = root;
//     while(current !=nullptr || !mp.empty()){
//         while(current->left != nullptr){
//             mp[current] = 1;
//             current = current->left;
//         }
        
//     }
//     return result;
// }

int main() {
    TreeNode* root = new TreeNode(4);
    root->right = new TreeNode(7);
    root->left = new TreeNode(2);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(8);
    root->right->right->left = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);

//       4
//      / |
//     2   7
//    / \ / |
//   1  3 5  8
//          /
//         6

    vector<int> result = inorderTraversal(root);

    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}