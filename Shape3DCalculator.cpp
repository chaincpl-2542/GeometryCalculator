#include <iostream>
#include "Shape3DCalculator.hpp"

using namespace std;

namespace GeometryOption
{
	_3DShapeApp::_3DShapeApp() {}

#pragma region Shape3D
    void _3DShapeApp::calculateCubeProperties()
    {
        double side;
        cout << "Enter the length of the side: ";
        cin >> side;

        double volume = side * side * side;

        cout << "Volume of the cube: " << volume << endl;
    }

    void _3DShapeApp::calculateSphereProperties()
    {
        double radius;
        cout << "Enter the radius: ";
        cin >> radius;

        double volume = (4.0 / 3.0) * 3.14159 * radius * radius * radius;

        cout << "Volume of the sphere: " << volume << endl;
    }

    void _3DShapeApp::calculateCylinderProperties()
    {
        double radius, height;
        cout << "Enter the radius: ";
        cin >> radius;

        cout << "Enter the height: ";
        cin >> height;

        double volume = 3.14159 * radius * radius * height;

        cout << "Volume of the cylinder: " << volume << endl;
    }

    void _3DShapeApp::calculateConeProperties()
    {
        double radius, height;
        cout << "Enter the radius: ";
        cin >> radius;

        cout << "Enter the height: ";
        cin >> height;

        double volume = (1.0 / 3.0) * 3.14159 * radius * radius * height;

        cout << "Volume of the cone: " << volume << endl;
    }

    void _3DShapeApp::calculateSquarePyramidProperties()
    {
        double baseLength, height;
        cout << "Enter the length of the base: ";
        cin >> baseLength;

        cout << "Enter the height: ";
        cin >> height;

        double volume = (1.0 / 3.0) * (baseLength * baseLength) * height;

        cout << "Volume of the square pyramid: " << volume << endl;
    }

    void _3DShapeApp::calculateTriangularPyramidProperties()
    {
        double baseArea, height;
        cout << "Enter the base area of the triangle: ";
        cin >> baseArea;

        cout << "Enter the height: ";
        cin >> height;

        double volume = (1.0 / 3.0) * baseArea * height;

        cout << "Volume of the triangular pyramid: " << volume << endl;
    }

    void _3DShapeApp::calculateEllipsoidProperties()
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

    void _3DShapeApp::calculateRectangularProperties()
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