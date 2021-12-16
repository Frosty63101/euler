#include <iostream>

#include <cmath>

#include <stdlib.h>

#include <cstdlib>

#include <cstring>

#include <string>

#include <sstream>

#include <conio.h>

#include <limits>

#include <iomanip>

constexpr auto PI = 3.14159265;
constexpr auto c = 3000000000000000;
constexpr auto h = 0.000000000000004136;
constexpr auto mn = 0.00000000000000000000000000167493;
constexpr auto mp = 0.0000000000000000000000000016726219;
constexpr auto me = 0.000000000000000000000000000000910938356;

int main()
{
    long double n;
    long double x;
    long double xx;

    n = 1;

    do {
        std::cout << n << "      ";

        xx = (1 + (1 / n));

        x = pow(xx , n );

        n = n + 10000000;

        std::cout << std::setprecision(1000) << x << "\n";

    } while (x > 1);

}