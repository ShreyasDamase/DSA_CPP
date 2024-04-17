/*#include<iostream>
using namespace std;
class relational{
    int i;
    
    public:
    relational(){}
    relational(int i ){
        this->i=i;
         
    }
   bool operator>(relational& obj)
    {

        if(this->i>obj.i)
        {
            return true;
        }else return false;

    }

    

};
int main(){
   relational A(4);
   relational B(5);
   if(A>B)
   {
    cout<<"A is biiger than B";

   }    else cout<<"B is biiger than A";


    return 0;}*/

    #include<iostream>
using namespace std;
class relational{
    int i;
    friend bool operator>(relational& obj1,relational& obj2);
    
    public:
    relational(){}
    relational(int i ){
        this->i=i;
         
    }
    

    

};

bool operator>(relational& obj1,relational& obj2)
    {

        if(obj1.i>obj2.i)
        {
            return true;
        }else return false;

    }
int main(){
   relational A(4);
   relational B(5);
   if(A>B)
   {
    cout<<"A is biiger than B";

   }    else cout<<"B is biiger than A";


    return 0;}