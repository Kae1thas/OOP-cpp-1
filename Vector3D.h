#ifndef VECTOR3D_H
#define VECTOR3D_H

#include <iostream>
#include <cmath>

class Vector3D {
private:
    double x, y, z;

public:
    Vector3D(double x_val = 0, double y_val = 0, double z_val = 0)
        : x(x_val), y(y_val), z(z_val) {}

    Vector3D operator+(const Vector3D& other) const;
    Vector3D operator-(const Vector3D& other) const;
    double dotProduct(const Vector3D& other) const;
    double length() const;
    double cosineAngle(const Vector3D& other) const;
    void print() const;
};

#endif 