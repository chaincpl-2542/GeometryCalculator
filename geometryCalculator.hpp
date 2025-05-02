#pragma once
#ifndef PROFILE_HPP
#define PROFILE_HPP

namespace GeometryOption
{

    enum ShapeType
    {
        ShapeType_None = 0,
        Shape2D = 1,
        Shape3D = 2,
    };

    enum Shape2DType
    {
        Shape2D_None = 0,
        Square = 1,
        Rectangle = 2,
        Triangle = 3,
        Circle = 4,
        Trapezoid = 5,
        Ellipes = 6
    };

    enum Shape3DType
    {
        Shape3D_None = 0,
        Cube = 1,
        Sphere = 2,
        Cylinder = 3,
        Cone = 4,
        SquarePyramid = 5,
        TriangularPyramid = 6,
        Ellipsoid = 7,
        Rectangular = 8
    };

    class App
    {
    public:
        App();
        void printMainMenu();
        void print2DShapeMenu();
        void print3DShapeMenu();

        //Shape2D
        void calculateSquareProperties();
        void calculateRectangleProperties();
        void calculateTriangleProperties();
        void calculateCircleProperties();
        void calculateTrapezoidProperties();
        void calculateEllipesProperties();

        //Shape 3D
        void calculateCubeProperties();
        void calculateSphereProperties();
        void calculateCylinderProperties();
        void calculateConeProperties();
        void calculateSquarePyramidProperties();
        void calculateTriangularPyramidProperties();
        void calculateEllipsoidProperties();
        void calculateRectangularProperties();

        void printAbout();
    };
}

#endif