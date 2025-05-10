#include <iostream>
#include <map>
#include <functional>
#include "GeometryCalculatorMenu.hpp"
#include "Shape2DCalculator.hpp"
#include "Shape3DCalculator.hpp"

using namespace std;
using namespace GeometryOption;

ShapeType shapeType = ShapeType::ShapeType_None;
Shape2DType shape2DType = Shape2DType::Shape2D_None;
Shape3DType shape3DType = Shape3DType::Shape3D_None;

void main()
{
	App app = App();
	_2DShapeApp _2dApp = _2DShapeApp();
	_3DShapeApp _3dApp = _3DShapeApp();

	map<Shape2DType, function<void()>> shape2DCalculators = {
		{Shape2DType::Square, [&_2dApp]() {_2dApp.calculateSquareProperties(); }},
		{Shape2DType::Rectangle, [&_2dApp]() {_2dApp.calculateRectangleProperties(); }},
		{Shape2DType::Triangle, [&_2dApp]() {_2dApp.calculateTriangleProperties(); }},
		{Shape2DType::Circle, [&_2dApp]() {_2dApp.calculateCircleProperties(); }},
		{Shape2DType::Trapezoid, [&_2dApp]() {_2dApp.calculateTrapezoidProperties(); }},
		{Shape2DType::Ellipes, [&_2dApp]() {_2dApp.calculateEllipesProperties(); }},
	};

	map<Shape3DType, function<void()>> shape3DCalculators = {
		{Shape3DType::Cube, [&_3dApp]() {_3dApp.calculateCubeProperties(); }},
		{Shape3DType::Sphere, [&_3dApp]() {_3dApp.calculateSphereProperties(); }},
		{Shape3DType::Cylinder, [&_3dApp]() {_3dApp.calculateCylinderProperties(); }},
		{Shape3DType::Cone, [&_3dApp]() {_3dApp.calculateConeProperties(); }},
		{Shape3DType::SquarePyramid, [&_3dApp]() {_3dApp.calculateSquarePyramidProperties(); }},
		{Shape3DType::TriangularPyramid, [&_3dApp]() {_3dApp.calculateTriangularPyramidProperties(); }},
		{Shape3DType::Ellipsoid, [&_3dApp]() {_3dApp.calculateEllipsoidProperties(); }},
		{Shape3DType::Rectangular, [&_3dApp]() {_3dApp.calculateRectangularProperties(); }},
	};

	while (true)
	{
		unsigned int choice = 0;

		app.printMainMenu();
		cin >> choice;
		if (cin.fail() || choice > 3) {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ล้าง input ที่ไม่ถูกต้อง
			cout << "Invalid input. Please try again.\n";
			continue;
		}

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
				cin.ignore();
				cout << "Press Enter to continue...";
				cin.get();
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
				cin.ignore();
				cout << "Press Enter to continue...";
				cin.get();
			}
		}
	}
}