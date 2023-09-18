#include <iostream>
#include <cmath>

int main()
{
    const std::string divider{"----------------------------------------------"};
    char op{};
    double num1{};
    double num2{};
    double result{};

    // NEVER EDIT BELOW

    std::cout << "------------------CALCULATOR------------------"
              << "\n";

    std::cout << "Choose operator (+ - * /):"
              << "\n";
    std::cin >> op;

    std::cout << "Enter first number:"
              << "\n";
    std::cin >> num1;

    std::cout << "Enter second number:"
              << "\n";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "Result: " << result << "\n";
        break;
    case '-':
        result = num1 - num2;
        std::cout << "Result: " << result << "\n";
        break;
    case '*':
        result = num1 * num2;
        std::cout << "Result: " << result << "\n";
        break;
    case '/':
        result = num1 / num2;
        std::cout << "Result: " << result << "\n";
        break;
    default:
        std::cout << "Your operator sign was invalid"
                  << "\n";
        break;
    }

    std::cout << divider << "\n";

    std::cout
        << "\n"
        << "\n";
    system("pause");
    return 0;
}
