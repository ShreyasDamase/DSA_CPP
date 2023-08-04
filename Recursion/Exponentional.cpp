#include<iostream>
using namespace std;

int expo(int num,int pow){
    if(pow==0){
        return 1;
    }
    if(pow==1){
        return num;
    }

    int ans = expo(num,pow/2);

    if(pow%2==0){
        return ans * ans;
        }else{
        return num * ans * ans;
        }
}
    int main()
    {
        int num, power;
        cout << "Enter the number:";
        cin >> num;
        cout << "power:";
        cin >> power;
        cout << expo(num, power);
        return 0;
}