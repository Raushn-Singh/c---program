#include<iostream>
using namespace std;

int stairproblem(int n){
    if(n==0||n==1){
        return 1;
    }

    int ans=stairproblem(n-1)+stairproblem(n-2);
    return ans;
}

int main(){
    int n;
    cout<<"enter the stairs :";
    cin>>n;
    int ans=stairproblem(n);
    cout<<"answer :"<<ans;

    return 0;
}