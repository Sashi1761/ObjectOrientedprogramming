#include<iostream>
using namespace std;

void test(int x)
{
    try{
        if(x==0)
        {
            throw 'x';
        }
        else if(x==1)
        {
            throw 1.0;
        }
        else if(x==2)
        {
            throw x;
        }
    }
    catch(int a)
    {
        cout<<"Integer type exception caught"<<a<<endl;

    }
    catch(double b)
    {
        cout<<"Double type execption caught"<<endl;

    }
    catch(char ch)

    {
        cout<<"Character type  exception caught"<<endl;
    }
}
int main()
{
    test(0);
    test(1);
    test(2);
    return 0;

}