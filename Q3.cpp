#include<iostream>
using namespace std;
class Array
{
    int a[100];
    const int size=100;
    public:
        Array()
        {

        }
        void setArray(int n, int index)
        {
            if(index>=size)
            {
                cout<<"Array Index Out of Bound Exception"<<endl;
                exit(0);
            }
            a[index]=n;
        }
        void display(int index)
        {
            cout<<a[index]<<endl;
        }
        int operator[](int index)
        {
            if(index>=size)
            {
                cout<<"Array Index out of Bound exception"<<endl;
                exit(0);
            }
            return a[index];
        }
};
int main()
{
    Array a;
    a.setArray(5,110);

    a.display(110);
    cout<<a[150];
    return 0;
}


