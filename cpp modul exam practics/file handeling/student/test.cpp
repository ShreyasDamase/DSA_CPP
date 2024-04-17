#include "StudentHeader.h"

void addStudent(ofstream& WRITE,Student& obj)
{ cout<<"student is added";
WRITE.seekp(ios::end);
	 WRITE<<obj.roll<<","<<obj.name<<","<<obj.div;
	 
}

void readStudent(ifstream&  READ){
	    Student obj;
    READ.clear();
    READ.seekg(0);

    if (READ.peek() == ifstream::traits_type::eof()) {
        cout << "No students found." << endl;
        return;
    }

    while (READ >> obj.roll >> obj.name >> obj.div) {
        // ... (rest of the loop remains the same)
    }

    // Print student information outside the loop
    cout << obj.roll << "," << obj.name << "," << obj.div << endl;

    READ.close();
}
int main()
{
    Student a(61,"Shreyas",'D');

 
	
     enum Choice {Exit,Write,Read};
	 
	int choice;
	  
	 while(true)
	 {
		 cout<<"enter the choie:0 exit 1 write 2 read";
		 cin>>choice ;
		switch(choice)
		{
			case Exit:
			return 0;
			 
			case Write:{
			
         			 ofstream WRITE;
          				WRITE.open("shreyas.txt");
	
	    					if (!WRITE.is_open()) 
								{
         					 cout << "Error opening file for writing." << endl;
    							return 1; // Indicate error
   								}else addStudent(WRITE,a);
   
			}break;
			
			
			
			case Read:{
				ifstream READ("shreyas.txt");
				if (!READ.is_open()) {
        cout << "Error opening file for reading." << endl;
   					 return 1;  }
			readStudent(READ);
			
			
		} break;
	 }
	
} return 0;}