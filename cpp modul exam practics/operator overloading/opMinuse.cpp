#include<iostream>
using namespace std;

class OpMinus
{

	int i;
	int j;
	
	public:


	OpMinus()
	{}


	OpMinus(int i,int j)
	{
		this->i=i;
		this->j=j;

	}

	void display()
	{
		cout<<this->i<<endl;
		cout<<this->j<<endl;
	}

	 OpMinus operator-(const OpMinus &obj)
	{
		 OpMinus *temp=new OpMinus;
		temp->i=this->i-obj.i;
		temp->j=this->j-obj.j;
		return *temp;
	
	}
};


int main()
{
	OpMinus a(5,6);
	OpMinus b(7,8);
OpMinus c=a-b;
c.display();
return 0;
}
