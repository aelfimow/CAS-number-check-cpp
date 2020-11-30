#include <iostream>
#include <stdexcept>
#include <list>
#include <functional>

#include "check_A.h"
#include "check_B.h"
#include "check_C.h"
#include "check_D.h"
#include "check_E.h"
#include "check_F.h"


int main(int argc, char *argv[])
try
{
    argc = argc;
    argv = argv;

    std::list<std::function<void ()>> check_functions
    {
        check_A,
        check_B,
        check_C,
        check_D,
        check_E,
        check_F
    };

    for (auto &check: check_functions)
    {
        check();
    }

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
