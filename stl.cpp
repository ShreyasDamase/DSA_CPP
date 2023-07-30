#include<iostream>
#include<vector>
#include<deque>
using namespace std;
int main(){
//     vector<int>a;
//     cout<<"capacity"<<a.capacity()<<endl;
// a.push_back(5);
// a.push_back(6);
// a.push_back(8);

// for(int i:a)
// {
//     cout<<i; 
// }

deque<int>b;
b.push_back(1);
b.push_back(2);
b.push_back(3);
b.push_back(4);
b.push_back(5);
b.push_back(5);
b.push_back(6);
b.push_back(8);
b.pop_front();
b.pop_back();
cout<<endl<<b.size();
for(int i:b){
    cout<<i<<endl;
}
cout<<endl<<b.size()<<endl;
// cout<<endl<<b.empty()<<endl;
// cout<<"is it fill";
// vector<int>c(7,0);
// for(int i:c){
//     cout<<i;
// }cout<<a.front()<<a.back()<<endl;
// cout<<b.front()<<b.back()<<endl;

// cout<<c.front()<<c.back()<<endl;

// return 0;
// a.erase(a.begin()+2);//deleting up to 2 its also reduce size anlike pop which only deleting inside value 
cout<<"after erase";
b.erase(b.begin()+3);//deleting up to 2 its also reduce size anlike pop which only deleting inside value 

for(int i:b){
    cout<<i<<endl;
}
cout<<endl<<b.size();
}