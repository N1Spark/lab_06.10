#include <iostream>
using namespace std;

class Circle
{
protected:

    double diameter;

public:

    Circle()
    {
        diameter = 0;
    }

    Circle(double a)
    {
        diameter = a;
    }

    void Show()
    {
        cout << "Circle diameter = " << diameter << endl;
    }
};

class Square
{
protected:

    double size;

public:

    Square()
    {
        size = 0;
    }

    Square(double a)
    {
        size = a;
    }

    void Show()
    {
        cout << "Square size = " << size << endl;
    }
};

class CircleInSquare : public Circle, public Square
{
public:

    CircleInSquare(double d, double s)
    {
        diameter = d;
        size = s;
    }

    bool Check()
    {
        bool temp;
        if (size > diameter)
        {
            temp = true;
        }
        else
        {
            temp = false;
        }
        return temp;
    }

    void ShowCS()
    {
        Circle::Show();
        Square::Show();
        if (Check())
        {
            cout << "Circle in square\n";
        }
        else
        {
            cout << "Circle not in square\n";
        }
    }
};

int main()
{
    CircleInSquare obj(2, 4);
    obj.ShowCS();
}