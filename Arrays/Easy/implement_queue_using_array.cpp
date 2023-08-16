 /*Implement Queue using array*/
#include<bits/stdc++.h>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
};

class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyQueue *sq = new MyQueue();

        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
        }
        cout<<endl;
    }
    }

 

//Function to push an element x in a queue.
void MyQueue :: push(int x)
{
     
       arr[rear++]=x;//addinf element att rear and shifting rear at next possition 
       
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
    int x;//initialized variable x to store poped element before shifting front 
    if(front== rear )//this condition shows the queue is empty 
    {
        return -1;
    }else { 
        x=arr[front++];// queue is full and storing elemrnt in variable and increasing front 
    }
    
    return x;//returned the poped element 
    
}
