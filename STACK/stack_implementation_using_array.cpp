#include<iostream>
#include<string>
using namespace std;
class STACK{
 int top,size;
 int *arr;
 public:
 STACK(int s){
    size=s;
    arr=new int[size];
    top=-1;
 }
 bool isempty(){
    return top==-1;
 }
 bool isfull(){
    return top==size-1;
 }
 void push(int x){
    if(isfull()){
        cout<<"stack overflow"<<endl;

    }
    else{
        if(isempty()){
            top=0;
            arr[top]=x;
            cout<<arr[top]<<" is pushed into the stack"<<endl;
        }
        else{
            top++;
            arr[top]=x;
            cout<<arr[top]<<" is pushed into the stack"<<endl;
        }
    }
 }
 void pop(){
    if(isempty()){
        cout<<"stack undeflow"<<endl;
    }
    else{
        cout<<arr[top]<<" is poped form the stack"<<endl;
        top--;
    }
 }
 void peek(){
    if(isempty()){
        cout<<"stack is emtpy"<<endl;
    }
    else{
        cout<<arr[top]<<" is element at the top"<<endl;
    }
 }
};
int main() 
{
    STACK OBJ(5);
    OBJ.push(4);
    OBJ.push(9);
    OBJ.push(6);
    OBJ.push(1);
    OBJ.push(0);
    OBJ.push(40);
    OBJ.peek();
    OBJ.pop();
 return 0;
};