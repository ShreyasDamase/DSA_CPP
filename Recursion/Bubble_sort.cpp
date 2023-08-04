#include<iostream>
using namespace std;

void bubble_sort(int *arr, int size){
   
    if (size  == 0 || size == 1){
        return;
    }
    
    for (int i = 0; i < size; i++)
        {
            if (*(arr + i) > *(arr + i + 1))
            {
                swap(*(arr + i), *(arr + i + 1));
            }
        }
        bubble_sort(arr, size - 1);

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
    bubble_sort(arr, size);
    display_array(arr, size);   
    return 0;
}