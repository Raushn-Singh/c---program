#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1){
        return 1;
    }

    int ans=n*factorial(n-1);
    return ans;
}

int main(){
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    int ans= factorial(n);
    cout<<"Answer :"<<ans;
    return 0;


}