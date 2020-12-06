#include "check_X.h"
#include "cas_number.h"

void check_X()
{
    {
        cas_number casnr { "16757-14-5" };
        casnr.formula("XeF").synonym("xenon monofluoride");
        casnr.check();
    }
    {
        cas_number casnr { "13709-36-9" };
        casnr.formula("XeF2").synonym("xenon difluoride");
        casnr.check();
    }
    {
        cas_number casnr { "13709-61-0" };
        casnr.formula("XeF4").synonym("xenon tetrafluoride");
        casnr.check();
    }
    {
        cas_number casnr { "13693-09-9" };
        casnr.formula("XeF6").synonym("xenon hexafluoride");
        casnr.check();
    }
    {
        cas_number casnr { "13774-85-1" };
        casnr.formula("XeOF4").synonym("xenon oxytetrafluoride");
        casnr.check();
    }
    {
        cas_number casnr { "13875-06-4" };
        casnr.formula("XeO2F2").synonym("xenon dioxydifluoride");
        casnr.check();
    }
    {
        cas_number casnr { "13776-58-4" };
        casnr.formula("XeO3").synonym("xenon trioxide");
        casnr.check();
    }
    {
        cas_number casnr { "12340-14-6" };
        casnr.formula("XeO4").synonym("xenon tetroxide");
        casnr.check();
    }
}
