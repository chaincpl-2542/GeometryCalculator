#pragma once
#ifndef SHAPE_2D_PROFILE_HPP
#define SHAPE_2D_PROFILE_HPP

namespace GeometryOption
{
    class _2DShapeApp
    {
    public:
        _2DShapeApp();
        void calculateSquareProperties();
        void calculateRectangleProperties();
        void calculateTriangleProperties();
        void calculateCircleProperties();
        void calculateTrapezoidProperties();
        void calculateEllipesProperties();
    };
}
#endif