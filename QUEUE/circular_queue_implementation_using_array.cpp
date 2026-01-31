#include<iostream>
using namespace std;
class QUEUE{
int front,rear,size;
int *arr; 
public:
QUEUE(int s):size(s){
    front=rear=-1; 
    arr=new int[size]; // returns the location of array to arr pointer 

}
bool isempty(){
    return front==-1;
}
bool isfull(){
    return (rear+1)%size==front;
}

void enqueue(int data){
    if(isfull()){
        cout<<"queue is overflowed"<<endl;

    }
    else if(isempty()){
        front=rear=0;
        arr[rear]=data;
        cout<<arr[rear]<<" is inserted into the queue "<<endl;;
    }
    else{
        rear=(rear+1)%size;
        arr[rear]=data;
        cout<<arr[rear]<<" is inserted into the queue"<<endl;
    }
}
void dequeue(){
    if(isempty()){
        cout<<"queue is underflowed"<<endl;

    }
    else{
        if(front>rear){
            cout<<arr[front]<<" is deleted from the queue"<<endl;
            front=rear=-1;
        }
        else{
            cout<<arr[front]<<" is delted from the queue "<<endl;
            front=(front+1)%size;
        }
    }
}
void peek(){
    if(isempty()){
        cout<<"queue is emtpy"<<endl;

    }
    else{
        cout<<arr[front]<<"  is element at the top"<<endl;
    }
}
};
int main(){
    QUEUE obj(5);
    obj.enqueue(12);
    obj.enqueue(40);
    obj.enqueue(29);
    obj.enqueue(0);
    obj.enqueue(45);
    obj.enqueue(69);
    obj.peek();
    obj.dequeue();
    obj.peek();
    obj.enqueue(44);
    obj.enqueue(2);
    obj.dequeue();
    obj.enqueue(2);
    return 0;
}