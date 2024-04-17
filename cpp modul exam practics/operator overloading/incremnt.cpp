/*#include<iostream>
using namespace std;
class Increment
{

    int i;
    int j;
    public:
    Increment()
    {

    }
    Increment(int i,int j)
    {
        this->i=i;
        this->j=j;

    }
    Increment operator++()//as i incrementing current obj so no argument 
    {
        this->i++;

        this->j++;
        return *this; 
        // /*If you return this instead of *this
        //  in the operator++ function, you would be returning
        //   a pointer to the current object instance rather than 
        //   the object itself. This can be useful in certain scenarios, 
        //   especially when you want to chain member function calls.
    }
    void display()const
    {
        cout<<"i "<<i<<"  j "<<j<<endl;
    }



};
int main()
{
    Increment A(4,5);
    ++A;//in case return this insted of *this  Increment *p=++A;
    A.display();//and here  p->display();
}

*/
 #include<iostream>
using namespace std;
class Increment
{

    int i;
    int j;
    public:
    Increment()
    {

    }
    Increment(int i,int j)
    {
        this->i=i;
        this->j=j;

    }
    Increment operator++(int) // Postfix increment
    {
        Increment old=*this;// assign current obj to old
        this->i++;
        this->j++;
        return old;// returning old( pre increment val to post )
        
    }
    void display()const
    {
        cout<<"i "<<i<<"  j "<<j<<endl;
    }



};
int main()
{
    Increment A(4,5);
    A++;//in case return this insted of *this  Increment *p=++A;
    A.display();//and here  p->display();
}

