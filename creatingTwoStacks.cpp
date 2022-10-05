#include <iostream>
using namespace std;
class TwoStack{
    public:
        int *arr;
        int top1;
        int top2;
        int size;
        TwoStack(int size){
            this->size=size;
            arr=new int[size];
            top1=-1;
            top2=size;
        }
        void push1(int element){
            if (top2-top1>1)
            {
                arr[++top1]=element;
            }
            else
                cout<<"Stack overflow"<<endl;
            
        }
        void push2(int element){
            if (top2-top1>1)
            {
                arr[--top]=element;
            }
            else    
                cout<<"Stack overflow"<<end;
            
        }
        int pop1(){
            if (top1>=0)
            {
                int ans=arr[top1];
                top1--;
                return ans;
            }
            else{
                cout<<"Stack overflow"<<endl;
                return -1;
            }
        }
        int pop2(){
            if (top2<size)
            {
                int ans=arr[top2];
                top2++;
                return ans;
            }
            else{
                cout<<"Stack overflow"<<endl;
                return -1;
            }
            
        }
};