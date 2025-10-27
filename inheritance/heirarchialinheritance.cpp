#include<iostream>
using namespace std;
class rectangle
{
    protected:
        int l,b;
    public:
        void input()
        {
            cout<<"Enter the value of length and breadth of rectangle"<<endl;
            cin>>l>>b;
        }
};
class area: public rectangle
{


};
 int main() 
{
  
  
  
return 0;
}