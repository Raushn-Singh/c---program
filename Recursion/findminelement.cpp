#include<iostream>
#include<climits>
using namespace std;
void minelement(int arr[],int size,int i,int &mini){
    if(i>=size){
      return;
    }
    if(arr[i]<=mini){
        mini=arr[i];
    }

    minelement(arr,size,i+1,mini);
    
}
int main(){
   int arr[]={10,20,30,40,50};
   int size=5;
   int i=0;
   int mini=INT_MAX;
   minelement(arr,size,i,mini);
   cout<<"minimum element of an array:"<<mini;
 

return 0;
}