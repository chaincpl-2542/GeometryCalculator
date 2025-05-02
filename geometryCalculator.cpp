#include <iostream>
#include "GeometryCalculator.hpp"

using namespace std;


namespace GeometryOption
{
    App::App() {}

    void App::printMainMenu()
    {
        cout << "----------------------------------" << endl;
        cout << "This calculator make by" << endl;
        cout << "Peeranat Luangaram 6738228" << endl;
        cout << "----------------------------------" << endl;
        cout << "I am GeoCalculator" << endl;
        cout << "Please select a program option:" << endl;
        cout << "----------------------------------" << endl;
        cout << "1 : 2D Shape" << endl;
        cout << "2 : 3D Shape" << endl;
        cout << "3 : About" << endl;
        cout << "0 : Exit" << endl;
        cout << "----------------------------------" << endl;
    }

    void App::printAbout()
    {
        cout << "----------------------------------" << endl;
        cout << "GeoCalculator Program" << endl;
        cout << "Created by: Peeranat Luangaram" << endl;
        cout << "Student ID: 6738228" << endl;
        cout << "----------------------------------" << endl;
    }

    void App::print2DShapeMenu()
    {
        cout << "Please select 2D shape:" << endl;
        cout << "----------------------------------" << endl;
        cout << "1 : Square    [+---+]" << endl;
        cout << "2 : Rectangle [+-----+]" << endl;
        cout << "3 : Triangle    /\\  " << endl;
        cout << "4 : Circle     ( o )" << endl;
        cout << "5 : Trapezoid  /__\\" << endl;
        cout << "6 : Ellipse    ( 0 )" << endl;
        cout << "0 : Back to home" << endl;
        cout << "----------------------------------" << endl;
    }


    void App::print3DShapeMenu()
    {
        cout << "Please select 3D shape:" << endl;
        cout << "----------------------------------" << endl;
        cout << "1 : Cube         [#]" << endl;
        cout << "2 : Sphere      ( o )" << endl;
        cout << "3 : Cylinder    [|||]" << endl;
        cout << "4 : Cone          /\\ " << endl;
        cout << "5 : SquarePyramid /\\_" << endl;
        cout << "6 : TriangularPyramid /\\ " << endl;
        cout << "7 : Ellipsoid   ( 0 )" << endl;
        cout << "8 : Rectangular [+----+]" << endl;
        cout << "0 : Back to home" << endl;
        cout << "----------------------------------" << endl;
    }


#pragma region Shape2D
    void App::calculateSquareProperties()
    {
        double side;
        cout << "Enter the length of the side: ";
        cin >> side;

        double area = side * side;

        cout << "Area of the square: " << area << endl;
    }

    void App::calculateRectangleProperties()
    {
        double width, length;

        cout << "Enter the width: ";
        cin >> width;

        cout << "Enter the length: ";
        cin >> length;

        double area = width * length;

        cout << "Area of the rectangle: " << area << endl;
    }

    void App::calculateTriangleProperties()
    {
        double base, height;

        cout << "Enter the base length: ";
        cin >> base;

        cout << "Enter the height: ";
        cin >> height;

        double area = (base * height) / 2.0;

        cout << "Area of the triangle: " << area << endl;
    }

    void App::calculateCircleProperties()
    {
        double radius;

        cout << "Enter the radius: ";
        cin >> radius;

        double area = 3.14159 * radius * radius;

        cout << "Area of the circle: " << area << endl;
    }

    void App::calculateTrapezoidProperties()
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

    void App::calculateEllipesProperties()
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

#pragma region Shape3D
    void App::calculateCubeProperties()
    {
        double side;
        cout << "Enter the length of the side: ";
        cin >> side;

        double volume = side * side * side;

        cout << "Volume of the cube: " << volume << endl;
    }

    void App::calculateSphereProperties()
    {
        double radius;
        cout << "Enter the radius: ";
        cin >> radius;

        double volume = (4.0 / 3.0) * 3.14159 * radius * radius * radius;

        cout << "Volume of the sphere: " << volume << endl;
    }

    void App::calculateCylinderProperties()
    {
        double radius, height;
        cout << "Enter the radius: ";
        cin >> radius;

        cout << "Enter the height: ";
        cin >> height;

        double volume = 3.14159 * radius * radius * height;

        cout << "Volume of the cylinder: " << volume << endl;
    }

    void App::calculateConeProperties()
    {
        double radius, height;
        cout << "Enter the radius: ";
        cin >> radius;

        cout << "Enter the height: ";
        cin >> height;

        double volume = (1.0 / 3.0) * 3.14159 * radius * radius * height;

        cout << "Volume of the cone: " << volume << endl;
    }

    void App::calculateSquarePyramidProperties()
    {
        double baseLength, height;
        cout << "Enter the length of the base: ";
        cin >> baseLength;

        cout << "Enter the height: ";
        cin >> height;

        double volume = (1.0 / 3.0) * (baseLength * baseLength) * height;

        cout << "Volume of the square pyramid: " << volume << endl;
    }

    void App::calculateTriangularPyramidProperties()
    {
        double baseArea, height;
        cout << "Enter the base area of the triangle: ";
        cin >> baseArea;

        cout << "Enter the height: ";
        cin >> height;

        double volume = (1.0 / 3.0) * baseArea * height;

        cout << "Volume of the triangular pyramid: " << volume << endl;
    }

    void App::calculateEllipsoidProperties()
    {
        double axisA, axisB, axisC;

        cout << "Enter semi-axis a: ";
        cin >> axisA;

        cout << "Enter semi-axis b: ";
        cin >> axisB;

        cout << "Enter semi-axis c: ";
        cin >> axisC;

        double volume = (4.0 / 3.0) * 3.14159 * axisA * axisB * axisC;

        cout << "Volume of the ellipsoid: " << volume << endl;
    }

    void App::calculateRectangularProperties()
    {
        double width, length, height;

        cout << "Enter the width: ";
        cin >> width;

        cout << "Enter the length: ";
        cin >> length;

        cout << "Enter the height: ";
        cin >> height;

        double volume = width * length * height;

        cout << "Volume of the rectangular prism: " << volume << endl;
    }
#pragma endregion
}