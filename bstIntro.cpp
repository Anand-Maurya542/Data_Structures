#include <iostream>
#include<queue>
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
node* insertIntoBst(node* &root,int d){
    //base case
    if (root==NULL)
    {
        root=new node(d);
        return root;
    }
    if(d>root->data){
        root->right=insertIntoBst(root->right,d);
    }
    else{
        root->left=insertIntoBst(root->left,d);
    }
    return root;
    

}
void takeInput(node* &root){
    int data;
    cin>>data;
    while (data!=-1)
    {
        root=insertIntoBst(root,data);
        cin>>data;
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

// bool searchInBst(node* root,int x){
//     if(root==NULL)
//         return false;
//     if(root->data==x)
//         return true;
//     if(root->data>x)
//         return searchInBst(root->left,x);
//     else
//         return searchInBst(root->right,x);
// }

//iterative way
bool searchInBst(node* root,int x){
    node* temp=root;
    while(temp!=NULL){
        if(temp->data==x)
            return true;
        if(temp->data>x)
            temp=temp->left;
        else    temp=temp->right;
    }
    return false;
}

//min and max value in a BST
node* minValue(node* root){
    node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}
node* maxValue(node* root){
    node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

//deletion
node* deleteFromBST(node* root,int val){
    //base case
    if(root==NULL)
        return root;
    if (root->data==val)
    {
        //o child
        if (root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }

        //1 child
        //left child
        if(root->left!=NULL && root->right==NULL){
            node* temp=root->left;
            delete root;
            return temp;
        }

        //right child
        if(root->right!=NULL && root->left==NULL){
            node* temp=root->right;
            delete root;
            return temp;
        }

        //2 child
        if (root->right!=NULL && root->left!=NULL)
        {
            int mini=minValue(root->right)->data;
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);
            return root;
        }
        
        
    }

    else if(root->data>val){
        root->left=deleteFromBST(root->left,val);
        return root;
    }
    else{
        root->right=deleteFromBST(root->right,val);
        return root;
    }
    
}



int main(){
    node* root=NULL;
    cout<<"Enter data "<<endl;
    takeInput(root);
    //10 5 12 4 6 65 18 11 14 20 -1
    cout<<"Printing "<<endl;
    leveOrderTraversal(root);
    // cout<<"Enter number to search : ";
    // int x;
    // cin>>x;
    // if(searchInBst(root,x))
    //     cout<<"present";
    // else    cout<<"Not present ";
    node* min;
    min=minValue(root);
    cout<<" Min value is "<<min->data;
    cout<<endl<<"max value is "<<maxValue(root)->data;
    deleteFromBST(root,10);
    cout<<"Printing "<<endl;
    leveOrderTraversal(root);

    return 0;
}