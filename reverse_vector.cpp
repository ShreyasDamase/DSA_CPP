#include<iostream>
#include<vector>
using namespace std;


vector<int>reverse(vector<int>v)
{
int s=0;
int e=v.size()-1;
while(s<=e){
    swap(v[s],v[e]);
    s++;
    e--;
}
return v;
}

void print(vector< int> v){
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    } 
    cout<<endl;
}

int main(){



vector<int>a;
a.push_back(1);
a.push_back(2);
a.push_back(3);
a.push_back(4);
a.push_back(5);
a.push_back(6);
a.push_back(7);
a.push_back(8);
vector<int>ans=reverse(a);
print(ans);
return 0;
}