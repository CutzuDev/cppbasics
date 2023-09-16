#include <iostream>
#include <cmath>

int main()
{

    double x{3};
    double y{4};
    double z{};

    z = std::max(x, y);
    z = std::min(x, y);
    z = pow(x, y);
    z = sqrt(y);

    std::cout << z;

    return 0;
}
