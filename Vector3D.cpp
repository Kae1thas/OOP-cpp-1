#include "Vector3D.h"

Vector3D Vector3D::operator+(const Vector3D& other) const {
    return Vector3D(x + other.x, y + other.y, z + other.z);
}

Vector3D Vector3D::operator-(const Vector3D& other) const {
    return Vector3D(x - other.x, y - other.y, z - other.z);
}

double Vector3D::dotProduct(const Vector3D& other) const {
    return x * other.x + y * other.y + z * other.z;
}

double Vector3D::length() const {
    return sqrt(x * x + y * y + z * z);
}

double Vector3D::cosineAngle(const Vector3D& other) const {
    double dot = dotProduct(other);
    double lengthProduct = length() * other.length();
    return dot / lengthProduct;
}

void Vector3D::print() const {
    std::cout << "(" << x << ", " << y << ", " << z << ")";
}