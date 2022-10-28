#include<iostream>
using namespace std;
class Complex
{
    int real,img;
    public:
        Complex(int r,int i)
         {
             real=r;
             img=i;
         }
         Complex()
         {

         }
         friend ostream & operator<<(ostream &os,Complex &c)
         {
             os<<"Real = "<<c.real<<" Img = "<<c.img<<endl;
             return os;
         }
         void setdata(int real ,int img)
         {
             this->real=real;
             this->img=img;
         }
         Complex & operator=(Complex &c)
         {
             this->real=c.real;
             this->img=c.img;
             return *this;
         }

};
int main()
{
    Complex c1(2,3);
    Complex c2;
    c2.setdata(4,5);
    Complex c3;
    c3=c1=c2;
    cout<<c1<<c2;
    return 0;
}


