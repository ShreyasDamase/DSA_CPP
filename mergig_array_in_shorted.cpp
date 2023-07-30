/*#include<iostream>
using namespace std;
#define size1 5
#define size2 5
#define size3 10
void merge(int arr1[size1],int arr2[size2],int ans[size3]);
void  merge(int arr1[size1],int arr2[size2],int ans[size3]){
    int i=0;
    int j=0;
    int k=0;
    while(i<size1 && j<size2){
        if(arr1[i]<arr2[j]){
            ans[k++]=arr1[i++];
        }else{
            ans[k++]=arr2[j++];
        }
    }
    while(i<size1){
        ans[k++]=arr1[i++];
    }
    while(j<size2){
        ans[k++]=arr2[j++];
    }
 
}

void print(int ans[size3]) {
    for(int i=0;i<size3;i++){
        cout<<ans[i];
    }

}

int main(){
int arr1[size1]={1,3,4,6,7};
int arr2[size2]={2,5,8,9,10};
int ansarr[size3]={0};
merge(arr1,arr2,ansarr);
print(ansarr);
return 0;
}

*/




 


#include<iostream>
using namespace std;
#define size1 6
#define size2 3

void merge(int arr1[size1],int arr2[size2]);
void  merge(int arr1[size1],int arr2[size2]){
    int i=size1;
    int j=size2;
    while(arr1[i]!=0){
        
        if(arr1[i]<arr2[j] && arr[i]) {
            arr1[i--]=arr2[j--];
        }
    }
     
}

void print(int ans[size1]) {
    for(int i=0;i<size1;i++){
        cout<<ans[i];
    }

}

int main(){
int arr1[size1]={1,2,3,0,0,0};
int arr2[size2]={2,5,6};
 
merge(arr1,arr2);
print(arr1);
return 0;
}

