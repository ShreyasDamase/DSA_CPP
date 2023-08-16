#include<iostream>
using namespace std;
void reverse(int *arr ,int i,int end){
    if(i>=end){
        return;
    }
    swap(arr[i], arr[end]);
    reverse(arr, i + 1, end - 1);
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
    reverse(arr,0,size-1);
    display_array(arr, size);

return 0;
}