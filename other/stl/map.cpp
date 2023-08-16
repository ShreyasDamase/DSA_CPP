#include<bits/stdc++.h>
using namespace std;
int main(){
    map<int, string> name;
    name[2] =  "bokya";//declaring key and pasing valye in key 
    name[3] =  "chaw mawo";//O[  log(n) ]
    name[4]; //O [  log(n)  ]
    name.insert({1, "shreyas"}); //inserting key and value same time 
    
auto it1=name.find(4);
if(it1!=name.end()){//if key is not found it will give me the segmentation fault thats why checking this condition is very nacessory 
    name.erase(it1);//elemnt 4 is exist so it will be deleted
}
 
    
    for(auto &i:name){

    cout <<i.first << " " <<i.second<<endl;//O[  log(n) ]
    }
    auto it = name.find(3); //O[  log(n) ]
    if(it==name.end()){//when key value is not fount map return thr end value thats why equating .end() 
    cout << "value is not found";
    }else
    cout << (*it).first << " " << (*it).second;//dont forget to put *it in ()
// following loop count the string count
//map<string,int>m;
    //  for(int i=0;i<n;;i++){
    // string s;
    // cin >> s;
    //  m[s]=m[s]+1;
    // m[s++];
    // }
    //  for(auto &i:name){

    // cout <<m.first << " " <<m.second<<endl;//O[  log(n) ]
    // }

    imp // map<string, string> name;//complexity is name.size*log(n)

        return 0;
}