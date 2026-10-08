
#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right=NULL;
    }
};
int countNode(Node* root){
    if(root==NULL)return 0;
    else return 1+countNode(root->left)+count(root->right);
}
int LeaveNode(Node* root){
    if(root==NULL)return 0;
    if(root->left==NULL && root->right==NULL)return 1;
    return LeaveNode(root->left)+LeaveNode(root-right);
}
int ChildNode(Node *root){
    if(root==NULL)return 0;
    if(root->left==NULL && root->right==NULL)return 0;
    if(root-left!=NULL && root->right!=NULL)return 1+ChildNode(root->left)+ChildNode(root->right);
    return ChildNode(root->left)+ChildNode(root->right);
}
int Onechild(Node *root){
    if(root==NULL)return 0;
    if(root->left==NULL && root->right==NULL)return 0;
    if(root-left!=NULL && root->right!=NULL)return Onechild(root->left)+Onechild(root->right);
    return 1+Onechild(root->left)+Onechild(root->right);
}
bool strictly(Node *root){
    if(root->left==NULL && root->right==NULL)return true;
    if(root->left!=NULL && root->right!=NULL)return strictly(root->left) and strictly(t->right);
    return false;
}
int depth(Node *root){
    if(root==NULL)return 0;
    if(root->left==NULL and root->right==NULL)return 0;
    int lH = depth(root->left);
    int rh = depth(root->right);
    return 1+max(lH,rh);
}
void CreateTree(Node*T){
    int choice;
    cout<<"Whether the left of"<<T->val<<"Exist?(1/0)";
    cin>>choice;
    if(choice==1){
        int x;
        cout<<"Enter the data of node";
        cin>>x;
        Node*p = MakeNode(x);
        T->left =p;
        CreateTree(p);
    }
    cout<<"Whether The right of"<<T->data<<"exist?(1/0)";
}

void displayTree(Node *Root){
if(Root==NULL)return;
cout<<Root->val<<" ";
displayTree(Root->left);
displayTree(Root->right);
}
int main(){
Node *a =new Node(1);
Node *b = new Node(2);
Node *c = new Node(3);
Node *d = new Node(4);
Node *e = new Node(5);
Node *f = new Node(6);
Node *g = new Node(7);
a->left = b;
a->right = c;
b->left = d;
b->right = e;
c->left=f;
c->right= g;
displayTree(a);

}