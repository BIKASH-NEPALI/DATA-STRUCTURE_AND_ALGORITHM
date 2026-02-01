#include<iostream>
using namespace std;
class HEAP{
int el;
int size; 
int *arr; 
public:
HEAP(int x){
    size=x;
    arr=new int[size];
    el=0;  

}
// insertion in heap 
void insert(int dat ){
    if(el==size){  // if heat is empty case 
        cout<<"heap is overflow"<<endl;
        return ;
    }
    arr[el]=dat;
    int idx=el;
    el++;
    // arranging data in max tree order 
    while(idx>0 &&arr[(idx-1)/2]<arr[idx]){ 
        swap(arr[(idx-1)/2],arr[idx]);
        
        idx=(idx-1)/2 ;
    }
    cout<<arr[idx]<<" is inserted into the heap "<<endl;

}
void show(){
    for(int i=0;i<el;i++){
        cout<<arr[i]<<endl;

    }
}
};
int main(){
    HEAP obj(5);
    obj.insert(34);
    obj.insert(67);
    obj.insert(90);
    obj.insert(27);
    obj.insert(10);
    obj.insert(40);
    obj.show();

    return 0;
}