#include<iostream>
#include<set>

using namespace std;
int main(){

set<int>a;
a.insert(1);
a.insert(2);
a.insert(9);
a.insert(6);
a.insert(8);
a.insert(1);
for(int i:a){
    cout<<i<<endl;
}
set<int>::iterator it=a.begin();
it++;
a.erase(it);//delete it now wich is on 2nd possion  
cout<<a.count(5);// for element is present or not

set<int>::iterator itr=a.find(5);// what is on 5th place 
for(auto it=itr;it!=a.end();it++)cout<<*it;//iterator in the form of adderace so pointer is used to point it
return 0;
}