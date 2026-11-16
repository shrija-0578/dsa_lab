// count height
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

vector<vector<int>> sol;
void fun(Node* root,int n)
{
    if(root==nullptr)
    {
        return;
    }
    if (n == sol.size()) {
        sol.push_back({});
    }
    sol[n].push_back(root->val);
    fun(root->left,n+1);
    fun(root->right,n+1);
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
    fun(root,0);
    cout<<sol.size()-1;

}