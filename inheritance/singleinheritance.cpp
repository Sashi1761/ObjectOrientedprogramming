//example of single inheritance and public inheritance
#include<iostream>
using namespace std;
class rectangle
{
protected:
    int l,b;
public:
    void input()
    {
        cout<<"Enter the value of length and breadth"<<endl;
        cin>>l>>b;
    }
};
class areaperi : public rectangle
{
    private:
        int a,p;
    public:
        void calcap()
        {
            a= l*b;
            p = 2*(l+b);
        }
        void display()
        {
            cout<<"The area is "<<a<<endl<<"The perimeter is "<<p<<endl;
        }
};
 int main() 
{
  areaperi a1;
  a1.input();
  a1.calcap();
  a1.display();
  
  
return 0;
}