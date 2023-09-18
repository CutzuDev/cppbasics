#include <iostream>

int main()
{

    double temp{};
    char unit{};

    const std::string divider{"----------------------------------------------"};
    std::cout << divider << "\n";

    std::cout << "F = Fahrenheit"
              << "\n";
    std::cout << "C = Celsius"
              << "\n";
    std::cout << "What unit would you like to convert to:"
              << "\n";
    std::cin >> unit;
    std::cout << "\n";

    if (unit == 'F' || unit == 'f')
    {

        std::cout << "Enter temperature in Celsius:"
                  << "\n";
        std::cin >> temp;
        std::cout << "\n";
        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is:" << temp << "F\n";
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter temperature in Fahrenheit:"
                  << "\n";
        std::cin >> temp;
        std::cout << "\n";
        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is:" << temp << "C\n";
    }
    else
    {
        std::cout << "Invalid input"
                  << "\n";
    }

    std::cout << divider << "\n";
    std::cout
        << "\n"
        << "\n";
    system("pause");
    return 0;
}
