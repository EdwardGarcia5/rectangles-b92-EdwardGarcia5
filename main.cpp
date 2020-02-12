// Cliente con pruebas para la clase Rectangle
// Edward García López
#define CATCH_CONFIG_MAIN
#include <iostream>
#include "catch.hpp"
#include "Rectangle.h"
using namespace std;

TEST_CASE("Rectangle tests", "[rectangle]") {
    Rec r01;
    Rec r02(3,1,5,4);

    REQUIRE((r01 < r02) == true);


}
