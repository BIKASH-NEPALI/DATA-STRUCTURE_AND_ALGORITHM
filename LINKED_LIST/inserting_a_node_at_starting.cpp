// implementation of linked list using array
#include<iostream>
using namespace std;
class NODE{ // defining a user defined data type
    public:
int data; 
NODE *next;
NODE(int x){
    data=x;
    next=NULL;

}
};
int main(){
    NODE *HEAD;
    HEAD=NULL;
   int  arr[]={10,20,30,40,50};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
    // if linked list is empty
    if(HEAD==NULL){
        HEAD=new NODE(arr[i]);
    }
    // if linked list is not empty
    else{
        NODE *temp=new NODE(arr[i]);
        temp->next=HEAD;
        HEAD=temp;
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