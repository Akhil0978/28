#include<iostream>
using namespace std;
class Coord
{
    int x,y,z;

    public:
        Coord(int a,int b,int c)
        {
            x=a;
            y=b;
            z=c;
        }
        void display()
        {
            cout<<" x = "<<x<<" y = "<<y<<" z = "<<z<<endl;
        }
        Coord()
        {

        }
        Coord operator,(Coord c)
        {
            Coord temp;
            temp.x=c.z;
            temp.y=c.y;
            temp.z=c.x;
            return temp;
        }

};
int main()
{
    Coord c1(1,2,3),c2(4,5,6),c3;
    c3=(c1,c2);
    c3.display();
    return 0;
}
