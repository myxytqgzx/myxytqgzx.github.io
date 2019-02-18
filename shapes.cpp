/*
* Tianqi Yang
* CIS 22A
*/

#include <iostream>
using namespace std;
void printTriangles(int length)
{
    for (int row=1; row <= length; row++)
    {
        for (int col=1; col <=row; col++)
        {
            cout << "*";
        }
        cout <<endl;
    }
}
void printRectangles(int length, int width)
{
    for (int row = 1; row <= width; row++)
    {
        for (int col = 1; col <= length; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printSquares(int length)
{
    for (int row = 1 ;row <=length ;row ++)
    {
        for (int col =1 ;col <=length ;col++)
        {
            cout << "*";
        }
        cout <<endl;
    }
}
int main()
{
    int length;
int width;
int base;
string shape;
string repeat;
do {cout << "I will print squares for you!"<<endl;
cout << "Rectangles and triangles, too!"<<endl<<endl;
cout << "Enter the shape that you would like to print (rectangle, triangle or square):";
cin >>shape;
if(shape == "rectangle"|| shape == "Rectangle")
{
    cout << "Enter the length of the rectangle:";
    cin >> length;
    cout << "Enter the width of the rectangle:";
    cin >> width;
    printRectangles(length, width);
}else if (shape== "triangle" || shape == "Triangle")
{
    cout << "Enter the length of the triangle's base:";
    cin >>base;
    printTriangles(base);
}else if (shape == "square" || shape =="Square")
{
    cout << "Enter the length of the side of the square:";
    cin >> length;
    printSquares(length);
}else {
cout << "You entered an invalid shape!"<<endl;
}
cout << "Would you like me to print more shapes for you (y/n)?";
cin >> repeat;
}while (repeat == "y");
cout << "Thanks for \"square\" dancing with me!";
}
