#include <iostream>
#include <cmath>

int main()
{

    double x{3.999};
    double y{4};
    double z{};

    z = std::max(x, y);
    z = std::min(x, y);
    z = pow(x, y);
    z = sqrt(y);
    z = abs(-100);
    z = round(x);
    z = ceil(x);
    z = floor(x);


    std::cout << z;

    return 0;
}
