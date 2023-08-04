//partial sum of number using recusion
#include<iostream>
using namespace std;

//factorial function 
int factorial(int num)
{   int ans; 
    if ( num == 0 )
    {
        return 0;
    }
    return ans = num + factorial( num - 1 );
}

int main(){
    int num;
    cout << "Enter the number:" << endl;
    cin  >> num;
    cout << factorial(num); //caling factorial function 
    
    return 0;
} 