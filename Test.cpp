#include "Test.h"
#include <cassert>
#include <cmath>
#include "Vector3D.h"
#include <iostream>

bool runTests() {
    Vector3D a(1, 2, 3);
    Vector3D b(4, 5, 6);

    assert(round(a.length() * 100) / 100 == 3.44);
    assert(round(b.length() * 100) / 100 == 8.77);  
    assert(a.dotProduct(b) == 32);

    return true;
}