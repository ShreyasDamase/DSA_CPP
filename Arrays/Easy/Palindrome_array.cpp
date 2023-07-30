//Palindromic Array
#include<iostream>
using namespace std;

int reverse_index_elment(int index_element){
    int ans = 0;
    int num = index_element;
    while(num !=0){
        int r = num % 10;
        ans = (ans * 10) + r;
        num = num / 10;
    }
    return ans;
}
    int is_palimdrone(int get_arry[], int size)
    {
        for (int i = 0; i < size; i++)
        {
            int num = reverse_index_elment(get_arry[i]);
             if(get_arry[i]!=num){
                 return 0;
             }
        }
        return 1;
}
void get_arry(int arr[],int size){
        for (int i = 0; i<size;i++){
            cin >> arr[i];
        }
}

 int main()
{
        int size;
        cin >> size;
        int arry[size];
        get_arry(arry, size);
        if(is_palimdrone(arry, size)){
            cout << "it is palimdromic";
        }else
            cout << "it is not palimdromic";
        return 0;
}