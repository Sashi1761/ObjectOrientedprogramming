#include <iostream>
using namespace std;

class farenheit; // Forward declaration

class degree
{
private:
    float deg;

public:
    void input()
    {
        cout << "Enter the value of degree Celsius: ";
        cin >> deg;
    }

    float return_deg()
    {
        return deg;
    }

   
    operator farenheit()  // Conversion routine in source class
    {
    farenheit temp;
    float f = (1.8 * deg) + 32;
    temp.setFarenheit(f);
    return temp;
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

    void setFarenheit(float f)
    {
        fa = f;
    }

    void display()
    {
        cout << "The value in Fahrenheit is: " << fa << endl;
    }
};


degree::operator farenheit()
{
    farenheit temp;
    float f = (1.8 * deg) + 32;
    temp.setFarenheit(f);
    return temp;
}

int main()
{
    degree d2;
    farenheit f2;

    d2.input();  // Input Celsius
    f2 = d2;     // Conversion happens here (source class routine)
    f2.display();

    return 0;
}
