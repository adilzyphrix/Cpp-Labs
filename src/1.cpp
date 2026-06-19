#include <iostream>

int getUserNum(){                       // asks the user for input
    int input{};
    std::cout << "Enter your number: ";
    std::cin >> input;
    return input;
}

int x{getUserNum()};                    /* x is a global variable,
                                           initialised to the value
                                           returned by getUserNum() */

int main()                              // main() is not the first function to get called here
{
    std::cout << x << " doubled is: " << x*2 << "\n";
    return 0;
}
