#include<iostream>
using namespace std;
class base
{
protected:
int l,b;

};
class derived: private base
{
    private:
     int a,p;
    public:
    void input()
    {
        cout<<"Enter the value of length and breadth of rectangel"<<endl;
        cin>>l>>b;

    }
    void calc_ap()
    {
        a = l*b;
        p = 2*(l+b);
    }

    void display()
    {
        cout<<"The area is = "<<a<<endl<<"The perimeter is= "<<p<<endl;
    }
};

 int main() 
{
  
  derived d;
  d.input();
  d.calc_ap();
  d.display();
  
return 0;
}