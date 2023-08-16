#include<iostream>
using namespace std;
void select_sort(int *arr ,int i,int end){
    if(i>=end){
        return;
    }
    for (int j= i+1;j <= end;j++){
    if(arr[i]>arr[j]){
        swap(arr[i], arr[j]);
    }
    }
    select_sort(arr, i + 1, end);
}

void get_array(int *arr,int size){
    for (int i = 0; i < size;i++){
        cin >> *(arr + i);
    }
}

void display_array(int *arr,int size){
    for (int i = 0; i < size;i++){
        cout << *(arr + i )<<" ";
    }  
}
int main(){
    int size;
     
    cout << "Enter the size:";
    cin >> size;
    int arr[size];
    get_array(arr, size);
    select_sort(arr,0,size-1);
    display_array(arr, size);

return 0;
}