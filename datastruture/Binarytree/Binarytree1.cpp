#include<iostream>
using namespace std;
struct Node{
    char data;
    struct Node* left;
    struct Node* right;
};
/**********************************************/
node *MakeNode(char x){
    node* p;
    p=new Node;
    p->data=x;
    p->left=NULL;
    p->right=NULL;
    return p;
}
/*********************************************/
void Preorder(Node* t){
    if(t!=NULL){
        cout<<t->data<<endl;
        Preorder(t->left);
        Preorder(t->right);
    }
}
/*********************************************/
void Inorder(Node* t){
    if(t!=NULL){
        Inorder(t->left);
        cout<<t->data<<endl;
        Inorder(t->right);
    }
}
/*********************************************/
void Postorder(Node* t){
    if(t!=NULL){
        Postorder(t->left);
        Postorder(t->right);
        cout<<t->data<<endl;
    }
}
/*********************************************/
int countNode(Node* root){
    if(root==NULL)return 0;
    else return 1+countNode(root->left)+count(root->right);
}
/*********************************************** */
int LeaveNode(Node* root){
    if(root==NULL)return 0;
    if(root->left==NULL && root->right==NULL)return 1;
    return LeaveNode(root->left)+LeaveNode(root-right);
}
/******************************************************** */
int ChildNode(Node *root){
    if(root==NULL)return 0;
    if(root->left==NULL && root->right==NULL)return 0;
    if(root-left!=NULL && root->right!=NULL)return 1+ChildNode(root->left)+ChildNode(root->right);
    return ChildNode(root->left)+ChildNode(root->right);
}
/************************************************************* */
int Onechild(Node *root){
    if(root==NULL)return 0;
    if(root->left==NULL && root->right==NULL)return 0;
    if(root-left!=NULL && root->right!=NULL)return Onechild(root->left)+Onechild(root->right);
    return 1+Onechild(root->left)+Onechild(root->right);
}
/******************************************************* */
bool strictly(Node *root){
    if(root->left==NULL && root->right==NULL)return true;
    if(root->left!=NULL && root->right!=NULL)return strictly(root->left) and strictly(t->right);
    return false;
}
/************************************************************* */
int depth(Node *root){
    if(root==NULL)return 0;
    if(root->left==NULL and root->right==NULL)return 0;
    int lH = depth(root->left);
    int rh = depth(root->right);
    return 1+max(lH,rh);
}
/***************************************************************** */
void CreateTree(Node*T){
    int choice;
    cout<<"Whether the left of"<<T->data<<"Exist?(1/0)";
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


int main(){
    Node *Root =NULL;
    Root = MakeNode('A');
    Root->left = MakeNode('B');
    Root->left->left = MakeNode('F');
    Root->Right = MakeNode('C');
    Root->Right->left = MakeNode('D');
    Root->Right-Right = MakeNode('E');
    PreOrder(Root);
    InOrder(Root);
    Postoder(Root);

    
}
