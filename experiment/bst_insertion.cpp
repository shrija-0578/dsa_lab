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

void insert_node(TreeNode* root,int x){
    TreeNode* nn=new TreeNode(x);
    TreeNode* temp=root;
    if(temp==nullptr){
        temp=nn;
        return;
    }
    while(temp!=nullptr){
        if(x>temp->val)
            temp=temp->right;
        else            //left balanced
            temp=temp->left;
    }
    if(x>temp->val)
        temp->right=nn;
    else
        temp->left=nn;
}
int main(){
    
    TreeNode* root=new TreeNode(4);
    insert_node(root,2);
    insert_node(root,7);
    insert_node(root,1);
    insert_node(root,3);
    insert_node(root,5);
    insert_node(root,8);
    insert_node(root,6);
}
