#include<iostream>
#include<map>
using namespace std;
int main(){
map<int,string>a;
a[1]="shreyas";
a[4]="damase";
a[3]="bokya";
a.insert( {5,"oggy"} );

for(auto i:a){
    cout<<i.first<<i.second<<endl;
}
cout<<"find 13="<<a.count(13)<<endl;

a.erase(3);
for(auto i:a){
    cout<<i.first<<endl;
}

auto it=a.find(5);
for(auto i=it;i!=a.end();i++){
    cout<<"now"<<(*i).first<<(*i).second<<endl;
}
return 0;
}