#include<iostream>
#include<math.h>
using namespace std;

 int main() 
{
  int num;
  cout<<"Enter the value of a number"<<endl;
  cin>>num;

  try
  {
    if(num<0)
    {
        throw num;
    }
    else
    {
        cout<<"The sqare root of given number is "<<sqrt(num)<<endl;
    }
  }
  catch(int n)
  {
    cout<<"Square root of negative number"<<n<<"Cannot be found";
    throw;
  }
  
  
  
return 0;
}