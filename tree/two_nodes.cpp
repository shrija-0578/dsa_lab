// count two nodes
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

int n=0;
void child(Node* root){
    // static int n=0;
    if(root==nullptr)
            return;
    child(root->left);
    cout<<root->val<<" ";
    if((root->left!=nullptr)&&(root->right!=nullptr)){
        ::n++;
    }
    child(root->right);
    
}




int main(){
    Node* root=new Node(100);
    root->left=new Node(20);
    root->right=new Node(20);
    root->left->left=new Node(810);
    root->left->right=new Node(30);
    root->right->left=new Node(10);
    root->right->right=new Node(3);
    root->right->right->left=new Node(13);
    child(root);
    cout<<"-------------------------------------------------------------"<<endl<<n;

}