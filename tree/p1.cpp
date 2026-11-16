#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int v){
        val=v;
        this->left=nullptr;
        this->right=nullptr;
    }
   
};

void Innorder(Node* root){
        if(root==nullptr)
            return;
        Innorder(root->left);
        cout<<root->val<<" ";
        Innorder(root->right);
    }
void postorder(Node* root){
        if(root==nullptr)
            return;
        Innorder(root->left);
        
        Innorder(root->right);
        cout<<root->val<<" ";
    }
void preorder(Node* root){
        if(root==nullptr)
            return;
        cout<<root->val<<" ";
        Innorder(root->left);
        
        Innorder(root->right);
        
    }

int main(){
    Node* root=new Node(100);
    root->left=new Node(20);
    root->right=new Node(200);
    root->left->left=new Node(10);
    root->left->right=new Node(30);
    root->right->left=new Node(150);
    root->right->right=new Node(300);

    Innorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;

}