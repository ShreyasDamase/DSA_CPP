#include<iostream>
using namespace std;
#define size 18
int binary_search(int arr[size],int key);
int binary_search(int arr[size],int key){
    int first=0;
    int mid;
    int last=size-1;
    
    while(first<=last){
        mid=first+((last-first)/2);
        if(arr[mid]==key){
            return 1;
        }
        if(key<arr[mid]){
        last=mid-1;
         
        }else{
        first=mid+1;
        }
    }
}
int main(){
int key ;
int arr[size]={1,2,3,4,5,6,7,8,10,11,12,33,44,55,66,77,88};
cin>>key;
int result=binary_search(arr,key);
if(result==1){
    cout<<"element is found";
}else cout<<"element not is found";
return 0;
}