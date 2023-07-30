#include<iostream>
using namespace std;

//#include<stack>// for shortcut of stack





/*#include<queue>// for queue

int main(){


queue<string>a;
a.push ("shreyas");// inthi method we cant use push_back that we usually do in stack and vector
a.push("damase");
int n=a.size();
for (int i = 0; i < n; i++)
{
     
     cout<<a.front();
    a.pop();
}

return 0;
}*/

#include<queue>
 int main(){
priority_queue<int>maxi;
//priority_queue<int, vector<int>,greater<int>>mini;
maxi.push(1);
maxi.push(2);
maxi.push(3);
maxi.push(4);

maxi.push(5);
int n=maxi.size();
for(int i=0;i<n;i++){
    cout<<maxi.top()<<endl;
    maxi.pop();
}
return 0;
 }