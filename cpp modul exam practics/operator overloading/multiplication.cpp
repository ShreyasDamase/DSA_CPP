/*#include<iostream>
using namespace std;
class multi

{
    int real;
    int img;
    public:
    multi()
    {

    }
    multi(int real,int img)
    {
        this->real=real;
        this->img=img;

    }


    multi operator *(multi& obj )
    {
        multi temp ;
         
        temp.real=(real*obj.real)-(img*obj.img);
        temp.img=(real*obj.img)+(img*obj.real);
        return temp;
    }
    void display()
    {
        cout<<"real:"<<real<<"+"<<"img"<<img<<endl;
    }

    void setter()
    {
        cout<<"real:";
        cin>>real;
        cout<<"\n img:";
        cin>>img;
    }
};
int main()
{
    multi A,B,C;
    A.setter();
    A.display();
    B.setter();
    B.display();
    C=A*B;
    C.display();


}
*/
/*

#include<iostream>
using namespace std;
class multi

{
    int real;
    int img;
    public:
    multi()
    {

    }
    multi(int real,int img)
    {
        this->real=real;
        this->img=img;

    }


    multi operator *(multi& obj )
    {
        int i;
        int j;
     
         
        i=(real*obj.real)-(img*obj.img);
        j=(real*obj.img)+(img*obj.real);
        return  multi (i,j);// class name and inside (values ) no need to make object direct call class consructor
    }
    void display()
    {
        cout<<"real:"<<real<<"+"<<"img"<<img<<endl;
    }

    void setter()
    {
        cout<<"real:";
        cin>>real;
        cout<<"\n img:";
        cin>>img;
    }
};
int main()
{
    multi A,B,C;
    A.setter();
    A.display();
    B.setter();
    B.display();
    C=A*B;
    C.display();


}*/

/*
#include<iostream>
using namespace std;
class multi

{
    int real;
    int img;
    friend  multi operator *(multi obj1,multi obj2 );

    public:
    multi()
    {

    }
    multi(int real,int img)
    {
        this->real=real;
        this->img=img;

    }


   
    void display()
    {
        cout<<"real:"<<real<<"+"<<"img"<<img<<endl;
    }

    void setter()
    {
        cout<<"real:";
        cin>>real;
        cout<<"\n img:";
        cin>>img;
    }
};
 multi operator *(multi obj1,multi obj2 )
 //in case shreyas u r usinf friend as to overload always remember u need to pass two objects as argument
// u cant pass one like normaly u use cause it cant locate real of this invoking vala so pass two obj 
    {
        multi temp;
             
        temp.img=(obj1.real*obj2.real)-( obj1.img*obj2.img);
        temp.real=(obj1.real*obj2.img)+(obj1.img*obj2.real);   
        return temp; }
int main()
{
    multi A,B,C;
    A.setter();
    A.display();
    B.setter();
    B.display();
    C=A*B;
    C.display();


} */