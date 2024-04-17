#include <iostream>
using namespace std;
class operatorOverloading // sry for keeping long word for a class
{
private:
    int a;
    float b;
    string name;

public:
    operatorOverloading()
    {
    }
    friend ostream &operator<<(ostream &output, operatorOverloading &obj); // friend is the only one which can grant  ostream and its object as output
    friend istream &operator>>(istream &input, operatorOverloading &obj);  // friend is the only one which can grant  ostream and its object as output
};
ostream &operator<<(ostream &output, operatorOverloading &obj)//& referance use for chaining
{
    output << obj.a << obj.b << obj.name;
    return output; // return the ostream output object
}
istream &operator>>(istream &input, operatorOverloading &obj)
{
    input >> obj.a >> obj.b >> obj.name;
    return input;
}

int main()
{
    operatorOverloading a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << a << b << c << d;
    return 0;
}
