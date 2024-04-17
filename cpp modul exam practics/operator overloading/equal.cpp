#include<iostream>
using namespace std;
class Equals{
    int i;
    int j;
    public:
    Equals(){}
     Equals(int i,int j)
     {
        this->i=i;
        this->j=j;
     }
     void display()const
     {
        cout<<i<<endl;
        cout<<j<<endl;
     }
     Equals operator=(Equals obj)
     {
        i=obj.i;
        j=obj.j;
        return Equals(i,j);
     }


};
int main(){
    Equals A(4,5),B;
    B=A;
    B.display();
    return 0;}