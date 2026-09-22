#include<bits/stdc++.h>
using namespace std;
// treenode construction
struct TreeNode
{
        int val;
        TreeNode* l;
        TreeNode* r;
        TreeNode() : val(0), l(nullptr),r(nullptr){};
        TreeNode(int x) : val(x), l(nullptr),r(nullptr){};
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), l(left), r(right) {};
};


// oder lvl traversal
vector<vector<int>> sol;
void fun(TreeNode* root,int n)
{
    if(root==nullptr)
    {
        return;
    }
    if (n == sol.size()) {
        sol.push_back({});
    }
    sol[n].push_back(root->val);
    fun(root->l,n+1);
    fun(root->r,n+1);
}
int main(){
    TreeNode* tnode=new TreeNode(78);
    // cout<<tnode->val<<endl;
    TreeNode* tn1=new TreeNode(90);
    TreeNode* tn2=new TreeNode(50);
    tnode->l=tn1;
    tnode->r=tn2;
    TreeNode* tn3=new TreeNode(70);
    TreeNode* tn4=new TreeNode(10);
    tn1->l=tn3;
    tn1->r=tn4;

    TreeNode* tn5=new TreeNode(19);
    tn2->l=tn5;

     fun(tnode,0);
    for(auto el:sol)
    {
        cout<<"[";
        for(int e:el)
            cout<<e<<" ";
        cout<<"]"<<endl;
    }
}