#include<iostream>
#include <vector>
using namespace std;
vector<int> rotate(vector<int>&a,int k){
    vector<int>temp(a.size());
    int i=0;
    
    for(int i=0;i<a.size();i++){

        temp[(i+k)%a.size()]=a[i];
       
      
         
    }
     
    return temp;
    }
    
 
int main(){
int k =3;
    vector<int>a={1,2,3,4,5,6,7};
  
    vector<int>ans=rotate(a,k);
    
    for (auto i : ans) {
        cout << i << " ";
    }
     
return 0;
}













/* #include<iostream>
 #define swap(a,b){int temp=a;a=b;b=temp;}
 using namespace std;
 #define size 10
 int rotate(int arr[]);
 void display(int arry[size]);
 int rotate(int arr[])
{
    int start=0;
    int last=size-1;
    int mid=(start+((last-start)/2))+1;
    int post=mid;
    for(int i=0;i<mid;i++){
    swap(arr[i],arr[post]);
    post ++;
    }
}

void display(int arry[size]){  // normal display function
for(int i=0;i<size;i++)
cout<<arry[i]<<" ";
}
 
 int main(){
 int arr[size]={1,2,3,4,5,6,7,8,9,10};
 rotate(arr);
 display(arr);
 return 0;
 }*/