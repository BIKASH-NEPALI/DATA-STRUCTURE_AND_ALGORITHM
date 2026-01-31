//isertion of element at the end without any tail pointer
#include<iostream>
using namespace std;
class NODE{
 public:
 int data; 
 NODE *next;
 NODE(int v){
    data=v;
    next=NULL;

 }
};
int main(){
    NODE * HEAD; 
    HEAD=NULL;
    int  arr[]={10,20,30,40,50};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    // if linked list is empty
    if(HEAD==NULL){
        HEAD=new NODE(arr[i]);
    }
    // if linked list is not empty
    else{
        NODE *tail;
        tail=HEAD;
        while(tail->next!=NULL){
            tail=tail->next;
        }
        tail->next=new NODE(arr[i]);
       
    }
    }
    // for traversing acroos the linked list
    NODE *temp=HEAD;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}