#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include <type_traits>

#include "Wektor2D.hpp"

TEST_CASE("ctor, set, get", "[]")
{
    Wektor2D v{};
    CHECK(v.getX() == Approx{0.});
    CHECK(v.getY() == Approx{0.});

    v.setX(1.);
    v.setY(2.);
    CHECK(v.getX() == Approx{1.});
    CHECK(v.getY() == Approx{2.});
}

TEST_CASE("algebra", "[]")
{
    Wektor2D v1{1., 2.};
    Wektor2D v2{2., 1.};
    auto     sum = v1 + v2;

    REQUIRE(std::is_same_v< Wektor2D, decltype(sum) >);
    CHECK(sum.getX() == Approx{3.});
    CHECK(sum.getY() == Approx{3.});

    auto prod = v1 * v2;

    REQUIRE(std::is_same_v< double, decltype(prod) >);
    CHECK(prod == Approx{4.});
}

/*
#include <iostream>
#include <math.h>
#include "Wektor2D.hpp"
int main()
{
    Wektor2D v1;
    v1.print();

    Wektor2D v2(0.5, 0.9);
    v2.print();

    v1.setX(0.2);
    v1.setY(0.3);
    v1.print();

    double norm1 = v1.norm();
    double norm2 = v2.norm();
    std::cout<<norm1<<"     "<<norm2<<"\n\n";

    double iloczynSkalarny = v1*v2;
    std::cout<<iloczynSkalarny<<"\n\n";

    Wektor2D suma = v1+v2;
    suma.print();
}*/

