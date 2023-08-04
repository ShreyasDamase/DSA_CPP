#include<iostream>
using namespace std;

bool palindrome(string &name, int start, int end)
{
  if(start>=end){
    return true;}
 
   
   if(name[start] != name[end]){
        
       return false;
   }else  
       {palindrome(name, start + 1, end - 1);}
   
   
}
int main()
{
    int start=0;
    string name;
    cout << "Enter the name:";
    cin >> name;
 
    bool ans = palindrome(name,start,(name.size()-1));
    if(ans){
   cout << "palindrome";
    }else{ 
   cout << "not palindrome";}
    return 0;
}