class Sport
{
    string SportName;
    double fees;
    public:
    Sport(){};

        Sport(string SportName,double fees ){
            
            this->SportName=SportName;
            this->fees=fees;
        };
        void display()
        {
            cout<<"Sport:"<<SportName;
            cout<<"fees":<<fees;
        }


};