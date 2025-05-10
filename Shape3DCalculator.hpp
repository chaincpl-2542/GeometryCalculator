#pragma once
#ifndef SHAPE_3D_PROFILE_HPP
#define SHAPE_3D_PROFILE_HPP

namespace GeometryOption
{
    class _3DShapeApp
    {
    public:
        _3DShapeApp();
        void calculateCubeProperties();
        void calculateSphereProperties();
        void calculateCylinderProperties();
        void calculateConeProperties();
        void calculateSquarePyramidProperties();
        void calculateTriangularPyramidProperties();
        void calculateEllipsoidProperties();
        void calculateRectangularProperties();
    };
}
#endif