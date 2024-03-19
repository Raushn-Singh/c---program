// creating heap using array
#include <iostream>
using namespace std;
class Heap{
    public:
    int arr[100];
    int size;
    Heap(){
     size=0;
    }
  void insert(int data){
    // insert at correct index
    size=size+1;
    int index=size;
    arr[index]=data;
    // place at correct position
    while(index>1){
        int parentindex=index/2;
        if(arr[parentindex]<arr[index]){
            swap(arr[parentindex],arr[index]);
          index=parentindex;
        }else{
            break;
        }
    }

  }

  int daleteval(){
    // swap last index with first index
    int ans=arr[1];
    swap(arr[size],arr[1]);
    size--;
  // place at correct position 

    int index=1;
    while(index<size){
        int left=2*index;
        int right=2*index+1;
        int largest=index;
        if(left<size && arr[left]>arr[largest]){
            largest=left;
        }
        if(right<size && arr[right]>arr[largest]){
            largest=right;
        }

        if(largest==index){
            break;
        }
        else{
            swap(arr[index],arr[largest]);
            index=largest;
        }
    }
    return ans;

  }

};

int main()
{
    Heap h;
    h.arr[0] = -1;
    h.arr[1] = 100;
    h.arr[2] = 50;
    h.arr[3] = 60;
    h.arr[4] = 40;
    h.arr[5] = 45;
    h.size = 5;
    cout<<"Printing the heap :"<<endl;
    for(int i=0; i<=h.size; i++){
        cout<<h.arr[i]<<" ";
    }
    h.insert(110);
    cout<<"Printing the heap :"<<" ";
    for(int i=0; i<=h.size; i++){
        cout<<h.arr[i]<<" ";
    }
    h.daleteval();
    cout<<"Printing the heap :"<<" ";
    for(int i=0; i<=h.size; i++){
        cout<<h.arr[i]<<" ";
    }
    
    }