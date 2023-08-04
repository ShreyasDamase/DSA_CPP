//Factorial using recursion 
#include<iostream>
using namespace std;
int factorial(int num)
{   int ans;  
    if ( num == 0 ){
        return 1;
    }
    return ans = num * factorial( num-1 );  
}

int main(){
    int num;
    cout << "Enter the number:" << endl;
    cin  >> num;
    cout << factorial(num);
    
    return 0;
}

