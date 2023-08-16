#include<iostream>
using namespace std;

void merge_arr(int *arr, int start, int end){

   int mid = (start + end - start) / 2 ;
   int l1 = mid - start + 1;
   int l2 = end - mid;

   int *first_part = new int[l1];
   int *second_part = new int[l2];

   int k = start;
   for (int i = 0; i < l1; i++){
       first_part[i] = arr[k++];
   }
   k = mid + 1;
   for (int i = 0; i < l2; i++){
       second_part[i] = arr[k++];
   }
  
   int index1 = 0;
   int index2 = 0;
 k= 0;
   while(index1<l1&&index2<l2){
    if(first_part[index1]<second_part[index2]){
        arr[k++] = first_part[index1++];
    }else{
        arr[k++] = second_part[index2++];
    }
   }
   while(index1<l1 ){
     arr[k++] = first_part[index1++];}
   while( index2<l2){
    arr[k++] = second_part[index2++];}
   delete []first_part;
   delete []second_part;
}

void mergesort(int *arr,int start,int end){
    if(start>=end){
        return;
    }
    int mid = ( start +  end  ) / 2 ;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge_arr(arr, start, end);
}

void get_arr(int *arr ,int size){

    for (int i = 0; i < size;i++){
        cin >> arr[i];
    }}
void display_arr(int *arr ,int size){

    for (int i = 0; i < size;i++){
        cout << arr[i]<<" ";
     
    }
}

int main(){
    cout << "Enter the size of array:";
    int size;
    cin >> size;
    int arr[size];
    get_arr(arr,size);
    mergesort(arr,0,size-1);
    display_arr(arr,size);
    return 0;
}