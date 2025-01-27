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
#include "check_G.h"
#include "check_H.h"
#include "check_I.h"
#include "check_K.h"
#include "check_L.h"
#include "check_M.h"
#include "check_N.h"
#include "check_O.h"
#include "check_P.h"
#include "check_R.h"
#include "check_S.h"
#include "check_T.h"
#include "check_U.h"
#include "check_V.h"
#include "check_W.h"
#include "check_X.h"
#include "check_Y.h"
#include "check_Z.h"


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
        check_F,
        check_G,
        check_H,
        check_I,
        check_K,
        check_L,
        check_M,
        check_N,
        check_O,
        check_P,
        check_R,
        check_S,
        check_T,
        check_U,
        check_V,
        check_W,
        check_X,
        check_Y,
        check_Z
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
