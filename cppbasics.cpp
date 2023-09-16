#include <iostream>
#include <cmath>

int main()
{
    int age{};

    std::cout << "Enter your age:"
              << "\n";
    std::cin >> age;
    std::cout << "\n";

    if (age <= 18)
    {
        std::cout << "You're not allowed in";
        std::cout << "\n";
        system("pause");
        return 0;
    }

    std::cout << "You're allowed in";
    std::cout << "\n" << "\n";
    system("pause");
    return 0;
}
