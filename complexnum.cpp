#include<iostream>
using namespace std;
class Complex {
    private:
    float real;
    float imag;
    public:
    Complex()
    {
    real=0;
    imag=0;
    }
    Complex(float r,float i)
    {
    real=r;
    imag=i;
    }
    ~Complex()
    {
    }
    void display(void)
    {
    cout<<real<<"+"<<imag<<"i"<<endl;
    }
    };
    
    int main()
    {
    Complex c1(2.0,3.0);
    cout<<"complex no. is"<<endl;
    c1.display();
    Complex c2(5.0,7.0);
    cout<<"complex no. is"<<endl;
    c2.display();
    return(0);
    }


    /*PS C:\Users\Student> cd "d:\pranavdeshmukh\" ; if ($?) { g++ complexnum.cpp -o complexnum } ; if ($?) { .\complexnum }
complex no. is
2+3i
complex no. is
5+7i
PS D:\pranavdeshmukh> 
*/
    
    
   