#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
// creation
unordered_map<string,int> m;
// insertion
pair<string,int> p={"scorpio",9};
m.insert(p);

pair<string,int>p2("alto",2);
m.insert(p2);

m["fortuner"]=10;

//access

 cout<<m["fortuner"]<<endl;

 //search
 cout<<m.count("scorpio")<<endl;

 if(m.find("fortuner")!=m.end()){
    cout<<"fortuner found"<<endl;
 }else{
    cout<<"fortuner not found"<<endl;
 }


       cout<<m.size()<<endl;


    cout<<"printing all entries"<<endl;
    for(auto i:m){
      cout<<i.first<<"->"<<i.second<<endl;
    }

    return 0;
}