#include <iostream>
using namespace std;

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void printArray(char ch[],int size){
    for (int i = 0; i < size; i++)
    {
        cout<<ch[i]<<" ";
    }
}
void maxMin(int arr[],int size){
    int max=INT8_MIN;
    int min=INT8_MAX;
    for (int  i = 0; i < size; i++)
    {
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Maximum value is : "<<max<<endl;
    cout<<"Minimum value is : "<<min<<endl;    
}
int main(){
    char ch[5]={'a','n','a','n','d'};
    int arr[]={54,20,-45,41};
    printArray(arr,4);
    cout<<endl;
    printArray(ch,5);
    cout<<"Calculating Maximum and Minimum value : "<<endl;
    maxMin(arr,4);
    return 0;
}  