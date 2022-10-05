#include <iostream>
#include <queue>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        node(int data){
            this->data=data;
            this->right=NULL;
            this->left=NULL;
        }
         
};

node* builtTree(node* root){
    cout<<"Enter the data "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    else{
        cout<<"Enter data for inserting in left of "<<data<<endl;
        root->left=builtTree(root->left);
        cout<<"Enter data for inserting in right of "<<data<<endl;
        root->right=builtTree(root->right);
        return root;

    }

}
void leveOrderTraversal(node* root){
    queue <node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
            
        }
        else{
            cout<<temp->data<<" ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
            
            
    }
    }

}

void inorder(node* root){
    //base case
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    //base case
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node* root){
    //base case
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void buildFromLevelOrder(node* root){
    queue<node*> q;
    cout<<"Enter data for root "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        
        cout<<"Enter left node for data "<<temp->data<<endl;
        int leftData;
        cin>>leftData;
        if(leftData!=-1){
            temp->left=new node(leftData);
            q.push(temp->left);
        }
        cout<<"Enter right node for data "<<temp->data<<endl;
        int rightData;
        cin>>rightData;
        if(rightData!=-1){
            temp->right=new node(rightData);
            q.push(temp->right);
        }
        

    }
}

int main(){
    node* root=NULL;
    // root=builtTree(root);
    // //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // leveOrderTraversal(root); 
    // cout<<"Inorder traversal ";
    // inorder(root);
    // cout<<endl<<"Preorder traversal ";
    // preorder(root);
    // cout<<endl<<"Postorder traversal ";
    // postorder(root);
    
}