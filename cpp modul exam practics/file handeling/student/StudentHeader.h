

#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Student
{public:
    int roll;
    string name;
    char div;
    
    Student()
    {
         
    };

    Student(int roll,string name,char div)
    {
       this->roll=roll;
       this->name=name;
       this->div=div; 
    }
    
    

};