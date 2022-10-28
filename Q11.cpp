#include<iostream>
using namespace std;
class Marks
{
    int marks;

    public:
        Marks(int m)
        {
            marks=m;
        }
        void display()
        {
            cout<<marks<<endl;
        }
        Marks *operator->()
        {
            return this;
        }
};
int main()
{
    Marks m(50);
    m.display();
    m->display();
    return 0;
}
