#include<iostream>
using namespace std;
class farenheit;
class degree
{
private:
    float deg;
public:
    void input()
    {
        cout<<"Enter the value of degree celcius"<<endl;
        cin>>deg;
    }
    float return_deg()
    {
        return deg;
    }
};

class farenheit
{
private:
  float fa;
  public:
  farenheit()
  {
    fa = 0.0;
  }
  farenheit(degree d)
  {
    fa = (1.8*d.return_deg())+32;
  }

  void display()
  {
    cout<<"The value of farenheit is"<<fa<<endl;
  }
};
 int main() 
{
  
  degree d2;
  farenheit f2;
  d2.input();
  f2 = d2;
  f2.display();
  
return 0;
}