#include<iostream>
#include<vector>
using namespace std;
int main(){
    
    vector<int> v={1,2,4,5,6};
    for(auto i: v){
        cout<<i<<" ";
        cout<<endl;
    }

    v.insert(v.begin()+2,3);

    for(auto i: v){
        cout<<i<<" ";
        cout<<endl;
    }

}