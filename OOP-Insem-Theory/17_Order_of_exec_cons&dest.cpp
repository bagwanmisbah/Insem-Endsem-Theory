// CONSTRUCTOR AND DESTRUCTOR (INHERITANCE)
#include <iostream>
using namespace std;
class Base
{
public:
Base()
{
cout << "Base constructor" << endl;
}
~Base()
{
cout << "Base destructor" << endl;
}
};
class Derived:public Base
{
public:
Derived()
{
cout <<"Derived constructor" << endl;
}
~Derived ( )
{
cout <<"Derived destructor" << endl;
}
};
int main()
{
Derived obj;
return 0;
}
// OUTPUT :
// Base constructor
// Derived constructor
// Derived destructor
// Base destructor
