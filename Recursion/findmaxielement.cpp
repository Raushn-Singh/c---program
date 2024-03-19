#include<iostream>
#include <climits>
using namespace std;

  void maxelement(int arr[],int size,int i, int &maxi){
    if(i>=size)
    return;
    
    if(arr[i]>maxi)
    maxi=arr[i];

    maxelement(arr,size,i+1,maxi);

  }
int main(){
    int arr[]={10,20,30,40,50};
    int size=5;
    int i=0;
    int maxi=INT_MIN;
    maxelement(arr,size,i,maxi);
    cout<<"maximum element in array :"<<maxi;
    return 0;
}