#include <iostream>
#include <stdexcept>

#include "cas_number.h"


int main(int argc, char *argv[])
try
{
    (void)argc;
    (void)argv;

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
