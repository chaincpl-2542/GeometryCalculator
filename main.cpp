#include <iostream>
#include <map>
#include <functional>
#include "GeometryCalculator.hpp"

using namespace std;
using namespace GeometryOption;

ShapeType shapeType = ShapeType::ShapeType_None;
Shape2DType shape2DType = Shape2DType::Shape2D_None;
Shape3DType shape3DType = Shape3DType::Shape3D_None;

void main()
{
	App app = App();

	map<Shape2DType, function<void()>> shape2DCalculators = {
		{Shape2DType::Square, [&app]() {app.calculateSquareProperties(); }},
		{Shape2DType::Rectangle, [&app]() {app.calculateRectangleProperties(); }},
		{Shape2DType::Triangle, [&app]() {app.calculateTriangleProperties(); }},
		{Shape2DType::Circle, [&app]() {app.calculateCircleProperties(); }},
		{Shape2DType::Trapezoid, [&app]() {app.calculateTrapezoidProperties(); }},
		{Shape2DType::Ellipes, [&app]() {app.calculateEllipesProperties(); }},
	};

	map<Shape3DType, function<void()>> shape3DCalculators = {
		{Shape3DType::Cube, [&app]() {app.calculateCubeProperties(); }},
		{Shape3DType::Sphere, [&app]() {app.calculateSphereProperties(); }},
		{Shape3DType::Cylinder, [&app]() {app.calculateCylinderProperties(); }},
		{Shape3DType::Cone, [&app]() {app.calculateConeProperties(); }},
		{Shape3DType::SquarePyramid, [&app]() {app.calculateSquarePyramidProperties(); }},
		{Shape3DType::TriangularPyramid, [&app]() {app.calculateTriangularPyramidProperties(); }},
		{Shape3DType::Ellipsoid, [&app]() {app.calculateEllipsoidProperties(); }},
		{Shape3DType::Rectangular, [&app]() {app.calculateRectangularProperties(); }},
	};

	while (true)
	{
		unsigned int choice = 0;

		app.printMainMenu();
		cin >> choice;

		switch (choice)
		{
		case 1:
			shapeType = ShapeType::Shape2D;
			break;
		case 2:
			shapeType = ShapeType::Shape3D;
			break;
		case 3:
			app.printAbout();
			continue;
		case 0:
			return;
		default:
			continue;
		}

		if (shapeType == ShapeType::Shape2D)
		{
			app.print2DShapeMenu();
			cin >> choice;

			switch (choice)
			{
			case 0:
				continue;

			case 1:
				shape2DType = Shape2DType::Square;
				break;

			case 2:
				shape2DType = Shape2DType::Rectangle;
				break;

			case 3:
				shape2DType = Shape2DType::Triangle;
				break;

			case 4:
				shape2DType = Shape2DType::Circle;
				break;

			case 5:
				shape2DType = Shape2DType::Trapezoid;
				break;

			case 6:
				shape2DType = Shape2DType::Ellipes;
				break;

			default:
				continue;
			}

			if (shape2DCalculators.find(shape2DType) != shape2DCalculators.end())
			{
				shape2DCalculators[shape2DType]();
			}

		}
		else if (shapeType == ShapeType::Shape3D)
		{
			app.print3DShapeMenu();
			cin >> choice;

			switch (choice)
			{
			case 0:
				continue;

			case 1:
				shape3DType = Shape3DType::Cube;
				break;

			case 2:
				shape3DType = Shape3DType::Sphere;
				break;

			case 3:
				shape3DType = Shape3DType::Cylinder;
				break;

			case 4:
				shape3DType = Shape3DType::Cone;
				break;

			case 5:
				shape3DType = Shape3DType::SquarePyramid;
				break;

			case 6:
				shape3DType = Shape3DType::TriangularPyramid;
				break;

			case 7:
				shape3DType = Shape3DType::Ellipsoid;
				break;

			case 8:
				shape3DType = Shape3DType::Rectangular;
				break;

			default:
				continue;
			}

			if (shape3DCalculators.find(shape3DType) != shape3DCalculators.end())
			{
				shape3DCalculators[shape3DType]();
			}
		}
	}
}