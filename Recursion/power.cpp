#include<iostream>
using namespace std;
int powerproblem(int base, int power){
    if(power==1){
        return base;
    }
    
    int ans=base*powerproblem(base,power-1);
    return ans;

}

int main(){
    int base,power;
    cout<<"enter the base value :"<<endl;
    cin>>base;
    cout<<"enter the power value :"<<endl;
    cin>>power;
    int ans =powerproblem(base,power);
    cout<<"answer "<<ans;
    return 0;
}