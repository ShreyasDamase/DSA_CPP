
#include<iostream>
#include<vector>
using namespace std;


int dividen(int count)
{
        int num=1;
        for (int i = 0; i<count;i++){
            num = num * 10;
        }
        return num;
}

void inputarr(int arr[],int size){
    for (int i = 0; i < size;i++){
        cin >> arr[i];
    }
}

int palindrome(int arr[],int size){
     
for (int i = 0; i < size;i++){
    
         int count = 0;
    vector<int> a;
         vector<int> b;
        int num = arr[i];
        
        
         int divisor = dividen(count);
         int num1 = num;
         int num2 = num;

         while (num1 != 0)
         {

             a.push_back(num1 % 10);
             num1 = num1 / 10;
             
             count++;
        }
         
        while(num2 != 0){
             
            
            b.push_back(num2 /divisor);
            num2 = num2 % divisor;
            divisor = divisor/10;
        }
       
        for (int j = 0; j < count; j++)
        {
          
            if(a[j] != b[j]){
                return 0;
            }
        }
       
 
      
}  


return 1;
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    inputarr(arr,size);
    int ans=palindrome(arr,size);
    cout << ans;
    return 0;
}












/*  //vector functio address concept


 #include<iostream>
 #include<vector>
using namespace std;
class book{
string name="A thousand Splendid sun";
string author="Khalid Hussen";
public:
void display(){
cout<< name<<endl;
cout<<author<<endl;
}
void page(vector<int>&a){
    a.push_back(1);
    a.push_back(12);
 
}

};


int main(){
    vector<int>vec;
    book b1;
    b1.display();
    b1.page(vec);
for(auto i:vec){
    cout<<i<<endl;
}
cout<<vec[1]<<endl;
return 0;
}
 */


















/* #include<iostream>
 using namespace std;
 class   demo
 {  int a;

    public:

    int b;
    int c=55;
    int id;
    int avg;
    string s1;
    string s2;
    
    void display() //default constructor
    {
        a=200;
        b=300;
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;

    }
   
   void display(string s1,string s2,int id, double avg)const{
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<id<<endl;
    cout<<avg<<endl;
    }
    
    void display(string cat, string name){
    cout<<cat<<endl;
    cout<<name<<endl;
    }
    void display(float a, int b){
        cout<<a<<endl;
        cout<<b<<endl;

    }
    void display(char a, int b);    

 };

    void demo::display(char a, int b){
     cout<<a++<<endl;
     cout<<b++<<endl;
 }
 int main(){
 demo dd;
 //dd.a=100;
 dd.c=600;
 dd.display();
 dd.display("shreyas","damase",4,6);
 dd.display("oggy","bokya");
 dd.display(55.3f,66);
 dd.display('A',66);
cout<<"\n"<<dd.c;
 return 0;
 }*/