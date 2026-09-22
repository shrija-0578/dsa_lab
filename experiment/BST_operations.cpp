#include<bits/stdc++.h>
using namespace std;
// binary seach tree insertion

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

TreeNode* insert_node(TreeNode* root,int x){
    TreeNode* nn=new TreeNode(x);
    TreeNode* temp=root;
    if(temp==nullptr){
        temp=nn;
        return temp;
    }
    TreeNode* prev=nullptr;
    while(temp!=nullptr){
        prev=temp;
        if(x>temp->val)
            temp=temp->right;
        else            //left balanced
            temp=temp->left;
    }
    if(x>prev->val)
        prev->right=nn;
    else
        prev->left=nn;
    return root;
}

void inorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }
    inorderTraversal(root->left);
    cout << root->val << " ";
    inorderTraversal(root->right);
}

TreeNode* delete_node(TreeNode* root,int key){
    TreeNode* temp=root;
    TreeNode* prev=nullptr; 

    while(temp!=nullptr && temp->val!=key){
        prev=temp;
        if(key>temp->val)
            temp=temp->right;
        else
            temp=temp->left;
    }
    TreeNode* right_noode=temp->right;
    TreeNode* left_node=temp->left;

    if(left_node != nullptr){
        TreeNode* temp2= left_node;
        while(temp2->right!=nullptr){
            temp2=temp2->right;
        }
        temp2->right=right_noode;
    }
    else{
        left_node=right_noode;
    }

    if(prev==nullptr){
        return left_node;
    }
    
   if(temp->val>prev->val){
        prev->right=left_node;
    }
    else{
        prev->left=left_node;
    }
    return root;
}



int main(){
    
    TreeNode* root=new TreeNode(4);
    root=insert_node(root,2);
    root=insert_node(root,7);
    root=insert_node(root,1);
    root=insert_node(root,3);
    root=insert_node(root,5);
    root=insert_node(root,8);
    root=insert_node(root,6);
    inorderTraversal(root);
    cout<<endl;

    root=delete_node(root,4);
    inorderTraversal(root);


}
