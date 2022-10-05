#include <iostream>
using namespace std;
class Stack{
    //properties
    int *arr;
    int top;
    int size;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    // functions
    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else
            cout<<"Stack overflow"<<endl;

    }
    void pop(){
        if(top>=0){
            top--;
        }
        else 
            cout<<"Stack is underflow"<<endl;

    }
    bool isempty(){
        if (top==-1)
            return true;
        
        else    
            return false;
        

    }
    int peek(){
        if (top>=0)
        {
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
            return -1;
        }
    }
};

int main(){

}