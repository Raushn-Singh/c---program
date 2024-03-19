#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    string str="thriuvananthapuram";
    unordered_map<char,int>m;
    for(int i=0; i<str.length(); i++){
        char ch=str[i];
        m[ch]++;
    }

    for(auto i: m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}