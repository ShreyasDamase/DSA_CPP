#include<iostream>
#include<string>
using namespace std;
class Student
{
    int roll;
    string name;
    Student *Array=nullptr;
    int size;
    public:
    Student()
    {

    }
    Student(int size)
    {
        this->size=size;
         this->Array= new Student[this->size];

    }
    
    Student(const Student& obj )
    {
        this->size=obj.size;
         

         for(int i =0;i<obj.size;i++){
            this->Array[i]=obj.Array[i];
         }
    }
   Student& operator[](int index)
    {
        if(index<0 || index >=size)
        {
            throw invalid_argument("Array index out of bound");

        }else
        return Array[index];
    } 
    ~Student()
    {
        delete[] Array;
    }

  void  getter()
  {
 cout<<"roll:";
   cin>>roll;
    cout<<"name:";

     
    cin.ignore();
    getline(cin,name);
    
  }
void display()
{
   cout<<"roll "<<roll<<endl;
   cout<<"name "<<name<<endl;
}




};

int main()
{
    Student s(3);
    for(int i=0;i<3;i++)
    {
        s[i].getter();
    }
    for(int i=0;i<3;i++)
    {
        s[i].display();
    }


}