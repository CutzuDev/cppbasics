#include <iostream>
#include <string>

int main()
{

    std::string name{};

    const std::string divider{"----------------------------------------------"};
    std::cout << divider << "\n";

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    std::cout << name.erase(0, 1) << "\n";

    std::cout << divider << "\n";
    std::cout
        << "\n"
        << "\n";
    system("pause");
    return 0;
}
