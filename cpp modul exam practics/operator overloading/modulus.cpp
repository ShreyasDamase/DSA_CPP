#include<iostream>
using namespace std;
class Modulus
{

    int i;
    int j;
    public:
  Modulus()
    {

    }
  Modulus (int i,int j)
    {
        this->i=i;
        this->j=j;

    }
    Modulus operator%(Modulus & obj) 
    {
        int a=this->i%obj.i;

        int b=this->j%obj.j;
        return Modulus(a,b); 
        
    }
    Modulus operator%(int m) 
    {
        int a=this->i%m;

        int b=this->j%m;
        return Modulus(a,b); 
        
    }
    void display()const
    {
        cout<<"i "<<i<<"  j "<<j<<endl;
    }



};
int main()
{
 Modulus A(4,5);
     Modulus B(2,3);
     Modulus c=A%B;
     c.display();
     Modulus d=A%3;
     d.display();


      
}