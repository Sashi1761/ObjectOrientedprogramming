#include<iostream>
using namespace std;

 int main() 
{
  float x, y,a;
  cout<<"Enter the value of x and y"<<endl;
  cin>>x>>y;
  a = x-y;

  try
  {
    
    if(a!=0)
    {
        cout<<"The result is "<<(x+y)/a<<endl;

    }
    else
    {
        throw a;
    }
  }
  catch(float a1)
  {
    cout<<"Divide by zero exception occurs"<<a1<<endl;
  }
  
  
  
  
return 0;
}