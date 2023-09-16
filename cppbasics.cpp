#include <iostream>
#include <cmath>

int main()
{
    double a{}, b{}, c{};

    std::cout << "Enter side A: "
              << "\n";
    std::cin >> a;
    std::cout << "\n";

    std::cout << "Enter side B: "
              << "\n";
    std::cin >> b;
    std::cout << "\n";

    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "Result:"
              << "\n"
              << c << "\n"
              << "\n";
    system("pause");

    return 0;
}
