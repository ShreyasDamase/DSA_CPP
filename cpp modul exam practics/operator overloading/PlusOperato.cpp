#include<iostream>
using namespace std;
class OperatoOverloading

{
	int i;
	int j;
 
	public:
	OperatoOverloading()
	{};
	OperatoOverloading(int i,int j)
	{
		this->i=i;
		this->j=j;
	}
	
OperatoOverloading operator+(const OperatoOverloading &obj)
	{
		OperatoOverloading *temp=new OperatoOverloading;
		temp->i=i+obj.i;
		temp->j=j+obj.j;
		return *temp;
		
	}
	void display(){
		cout<<this->i<<endl;
		cout<<this->j<<endl;
	}
};

int main()
{
	OperatoOverloading s(4,5);
		s.display();
	OperatoOverloading k(6,8);
		k.display();
	OperatoOverloading l=s+k;
	l.display();
	
	return 0;
	
}