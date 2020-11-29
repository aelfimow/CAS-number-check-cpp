#include <iostream>
#include <stdexcept>

#include "check_A.h"
#include "check_B.h"


int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    check_A();
    check_B();

    return EXIT_SUCCESS;
}
catch (std::exception &exc)
{
    std::cerr << "Exception: " << exc.what() << std::endl;
    return EXIT_FAILURE;
}
catch (...)
{
    std::cerr << "Error: exception" << std::endl;
    return EXIT_FAILURE;
}
