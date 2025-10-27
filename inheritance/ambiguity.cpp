#include<iostream>
using namespace std;
class length
{
protected:
    int l;
public:
 void input()
 {
    cout<<"Enter the value of length"<<endl;
    cin>>l;
 }
};

class breadth
{
    protected:
        int b;
    public:
        void input()
        {
            cout<<"Enter the value of breadth of rectangle"<<endl;
            cin>>b;
        }
};
class rectangle: public length, public breadth
{
    private:
        int a,p;
    public:
        void calc_ap()
        {
            a = l*b;
            p = 2*(l+b);

        } 
        void display()
        {
            cout<<"The area is="<<a<<endl<<"The perimeter is="<<p<<endl;
        }

};
 int main() 
{
  rectangle r;
  r.length::input();
  r.breadth::input();
  r.calc_ap();
  r.display();
  
  
return 0;
}