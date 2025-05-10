#include <iostream>
#include "Shape2DCalculator.hpp"

using namespace std;

namespace GeometryOption
{
	_2DShapeApp::_2DShapeApp() {}

#pragma region Shape2D
    void _2DShapeApp::calculateSquareProperties()
    {
        double side;
        cout << "Enter the length of the side: ";
        cin >> side;

        double area = side * side;

        cout << "Area of the square: " << area << endl;
    }

    void _2DShapeApp::calculateRectangleProperties()
    {
        double width, length;

        cout << "Enter the width: ";
        cin >> width;

        cout << "Enter the length: ";
        cin >> length;

        double area = width * length;

        cout << "Area of the rectangle: " << area << endl;
    }

    void _2DShapeApp::calculateTriangleProperties()
    {
        double base, height;

        cout << "Enter the base length: ";
        cin >> base;

        cout << "Enter the height: ";
        cin >> height;

        double area = (base * height) / 2.0;

        cout << "Area of the triangle: " << area << endl;
    }

    void _2DShapeApp::calculateCircleProperties()
    {
        double radius;

        cout << "Enter the radius: ";
        cin >> radius;

        double area = 3.14159 * radius * radius;

        cout << "Area of the circle: " << area << endl;
    }

    void _2DShapeApp::calculateTrapezoidProperties()
    {
        double base1, base2, height;

        cout << "Enter the length of base 1: ";
        cin >> base1;

        cout << "Enter the length of base 2: ";
        cin >> base2;

        cout << "Enter the height: ";
        cin >> height;

        double area = ((base1 + base2) * height) / 2.0;

        cout << "Area of the trapezoid: " << area << endl;
    }

    void _2DShapeApp::calculateEllipesProperties()
    {
        double axisA, axisB;

        cout << "Enter the length of semi-major axis (a): ";
        cin >> axisA;

        cout << "Enter the length of semi-minor axis (b): ";
        cin >> axisB;

        double area = 3.14159 * axisA * axisB;

        cout << "Area of the ellipse: " << area << endl;
    }
#pragma endregion
}