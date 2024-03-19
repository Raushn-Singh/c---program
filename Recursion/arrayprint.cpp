#include<iostream>
using namespace std;
void print(int arr[],int size,int i){
      if(i>=size)
      return;
       
       cout<<arr[i]<<" ";
       print(arr,size,i+1);

}


int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int i=0;
    print(arr,size,i);

    return 0;
}