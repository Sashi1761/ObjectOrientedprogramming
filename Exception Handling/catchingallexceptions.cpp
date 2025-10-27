#include<iostream>
using namespace std;
void test(int x)
{
    try{
        if(x==0)
        {
             throw 'x';//throw character
        }
        else if(x==1)
        {
            throw 1.0;//throw float
        }
        else if(x==2)
        {
            throw x;// throw integer
        }
       

    }
    catch(...)
    {
        cout<<"All types of exceptions are handled here"<<endl;
    }
}
int main()
{
    test(0);
    test(1);
    test(2);
}