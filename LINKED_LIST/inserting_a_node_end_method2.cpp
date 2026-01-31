// inserting a node at the end with with using tail pointer; 
#include<iostream>
using namespace std;
class NODE{
    public:
int data; 
NODE *next; 
NODE(int x ){
    data=x; 
    next=NULL;
   
}
};
int main(){
    NODE *HEAD; 
    NODE *TAIL; 
    HEAD=TAIL=NULL;
     int  arr[]={10,20,30,40,50};
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        //when linked list is emptpy 
        if(HEAD==NULL){
            HEAD=new NODE(arr[i]);
            TAIL=HEAD;

        }
        // if linked list doesn't exist
        else{
            TAIL->next=new NODE(arr[i]);
            TAIL=TAIL->next;

            }
        }
        // for traversing accross the linked list
        NODE *temp;
        temp=HEAD;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    


    
    return 0; 
}