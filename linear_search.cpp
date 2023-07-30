#include<iostream>
#include<iomanip>
using namespace std;
#define size 14
 void display(int array[size]);
 int  linear_search(int array[size],int key);

 void display(int array[size]){
    for(int i=0;i<size-1;i++){
        cout<<array[i]<<"\n";
    }
 }

int linear_search(int array[size],int key){
  
    for( int i=0;i<size;i++){
        if(array[i]==key){
            
            return i;
            
        }
    }
  cout<<"key is not found";
  return -1;
}
int main(){
    int key ;
    int array[size]={11,12,13,14,15,16,18,28,26,27,25,21,20};
    cout<<"enter the key=";
    cin>>key;
    display(array);
    int index=linear_search(array,key);
   if(index!=-1) {cout<<"key is found";
    cout<<" at index="<<index<<endl;}
          
return 0;
}
