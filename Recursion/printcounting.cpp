#include<iostream>
using namespace std;

 void printcounting(int n){
    if(n==0){
        return ;
    }

    printcounting(n-1);

    cout<<n<<endl;

}


int main(){
    int n;
    cout<<"enter the number :";
    cin>>n;
     printcounting(n);
    return 0;
}