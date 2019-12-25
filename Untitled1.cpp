#include <iostream>
using namespace std;
class A
{
    public:
    double a;
    void display1()
    {
       std::cout << "Enter the value of 'a' : ";
       cin>>a;
    }
};

class B : public A
{
      public:
    double b;
    void display2()
    {
        std::cout << "Enter the value of 'b' : " ;
       cin>>b;
    }
};
class C
{
       public:
    double c;
    void display3()
    {
        std::cout << "Enter the value of c is : ";
        cin>>c;
    }
};

class D : public B, public C
{
    public:
    double d=3;
    void mul()
    {
         display1();
         display2();
         display3();
         std::cout << "Multiplication of a,b,c is : " <<a*b*c<< std::endl;
         std::cout<<"The average of a,b,c: "<<a*b*c/d;
    }
};
int main()
{
    D obj;
    obj.mul();
    return 0;
}
