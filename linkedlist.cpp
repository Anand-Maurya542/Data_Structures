#include <iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        //constructor
        Node(int data){
            this->data=data;
            this->next=NULL;
        }
        //destructor
        ~Node(){
            int value=this->data;
            //memory free
            if(this->next!=NULL){
                delete next;
                this->next=NULL;
            }
        cout<<"Memory is free for Node with data "<<value
        <<endl;
        }
        
};

//inserting value at beginning
void insertAtHead(Node* &head,int d){
    //create new node
    Node* temp=new  Node(d);
    temp->next=head;
    head=temp;
}

//inserting values at end
void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

//inserting values at required position
void insertAtPositoin(Node* &head,Node* &tail,int position,int d){
    if (position==1)
    {
        insertAtHead(head,d);
        return;
    }
    
    Node* temp=head;
    int cnt=1;
    while (cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    //inserting at last and updating tail
    if (temp->next==NULL)
    {
        insertAtTail(tail,d);
        return;
    }
    

    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
    
}

//deleting at positon
void deleteNode(int position,Node* &head,Node* &tail){
    if (position==1)
    {
        Node* temp=head;
        head=head->next;    //shifting head

        //memory free for start node
        temp->next=NULL;    //to remove the pointer
        delete temp;
    }
    else{
        //deleting any middle or last node
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;            
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        tail=prev;
    }
    
}

//traversing/printing values
void print(Node* &head){
    Node* temp=head;
    while (temp!=NULL)  
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
    
}

int main(){
    Node* node1=new Node(10);
    //pointer to head
    Node* head=node1;
    //pointer to tail
    Node* tail=node1;

    print(head);
    insertAtHead(head,12);
    print(head);
    insertAtTail(tail,88);
    insertAtTail(tail,86);
    insertAtTail(tail,845);
    print(head);
    insertAtPositoin(head,tail,6,22);
    print(head);
    cout<<"head  = "<<head->data<<endl;
    cout<<"tail  = "<<tail->data<<endl;
    deleteNode(6,head,tail);
    print(head);

    cout<<"head  = "<<head->data<<endl;
    cout<<"tail  = "<<tail->data<<endl;
}