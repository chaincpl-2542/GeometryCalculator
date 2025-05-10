#include <iostream>
#include "GeometryCalculatorMenu.hpp"

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
}