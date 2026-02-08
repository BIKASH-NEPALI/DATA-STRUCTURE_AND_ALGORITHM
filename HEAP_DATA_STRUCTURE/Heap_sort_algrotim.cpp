#include<iostream>
#include<algorithm>
using namespace std; 
// heapify using recursive function 
void heapify(int arr[], int index, int size){
    int largest=index; 
    int right=index*2+2; 
    int left=index*2+1; 
    if(left<size &&arr[left]>arr[largest]){
        largest=left; 
    }
    if(right<size &&arr[right]>arr[largest]){
        largest=right; 
    }
    if(largest!=index){
        swap(arr[largest],arr[index]);
        heapify(arr, largest, size);

    }
    
}
// building a heap 
void buildMaxheap(int arr[], int size ){
 for(int i=(size/2)-1;i>=0; i--){
    heapify(arr,i, size );
 }
}
void sortedheap(int arr[], int size){
    for(int i=size-1;i>0; i--){
        swap(arr[0],arr[i]);
        heapify(arr,0,i);// size should be srink every time 
    }
}
void printdata(int arr[],int size){
    cout<<"The data in sorted order:"<<endl;
for(int i=0; i<size;i++){
    cout<<arr[i]<<endl;
}
}

int main(){
    int arr[]={100,40,50,30,20, 90,10,60,80,70};
    int size=sizeof(arr)/sizeof(arr[0]);
    buildMaxheap(arr,size); // builds the heap data structure from provided data; 
    sortedheap(arr,size);
    printdata(arr,size);

    return 0; 

}