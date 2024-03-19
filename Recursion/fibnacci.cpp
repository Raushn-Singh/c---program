#include<iostream>
using namespace std;
int  fib(int n){
    if(n==0 || n==1){
        return n;
    }
    if(n==2){
        return 1;
    }
     
    int ans=fib(n-1)+fib(n-2);
    
    return ans;
}

int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
  int ans=  fib(n);
  cout<<n<<" "<<ans;
return 0;

}