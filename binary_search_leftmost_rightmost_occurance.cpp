#include<iostream>
#define size 13
using namespace std;
int lbinary_search(int arr[size],int key);
int rbinary_search(int arr[size],int key);




int lbinary_search(int arr[size],int key){
    int first,mid,last;
    first=0;
    last=size-1;
    int ans=-1;
    while(first<last){
        mid=first+((last-first)/2);
        if(arr[mid]==key){
            ans=mid;
            last=mid-1;
            
        }
        if(arr[mid]<key){
            last=mid-1;

        }
        if(arr[mid]>key){
            first=mid+1;
            
        }
    }
    return ans;
}

 
int rbinary_search(int arr[size],int key){
    int first,mid,last;
    first=0;
    last=size-1;
    int ans;
    while(first<last){
        mid=first+((last-first)/2);
        if(arr[mid]==key){
            ans=mid;
             first=mid+1;
            
        }
        if(arr[mid]<key){
            last=mid-1;

        }
        if(arr[mid]>key){
            first=mid+1;
            
        }
    }
    return ans;
}
int main(){
int key;
int occurance_numbers;
cout<<"Enter the key =";
cin>>key;
int arr[size]={1,2,2,3,3,3,4,4,4,4,5,6,7};

int Lindex=lbinary_search(arr,key);
if(Lindex!=-1){cout<<"\nLeftmost opsition of key is="<<Lindex;}
else{cout<<"key is not found";}

int Rindex=rbinary_search(arr,key);
if(Rindex!=-1){cout<<"\nRighttmost opsition of key is="<<Rindex;}
else{cout<<"key is not found";}

occurance_numbers=Rindex-Lindex;
cout<<"\noccurance is="<<occurance_numbers+1;
return 0;
}