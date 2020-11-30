#include "check_D.h"
#include "cas_number.h"

void check_D()
{
    {
        cas_number casnr { "12310-43-9" };
        casnr.formula("DyB4").synonym("dysprosium(II) boride");
        casnr.check();
    }
    {
        cas_number casnr { "83229-05-4" };
        casnr.formula("DyBr2").synonym("dysprosium(II) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "14456-48-5" };
        casnr.formula("DyBr3").synonym("dysprosium(III) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "3252-58-2" };
        casnr.formula("Dy(CHO2)3").synonym("dysprosium(III) formate");
        casnr.check();
    }
    {
        cas_number casnr { "13767-31-2" };
        casnr.formula("DyCl2").synonym("dysprosium(II) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "10025-74-8" };
        casnr.formula("DyCl3").synonym("dysprosium(III) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "13569-80-7" };
        casnr.formula("DyF3").synonym("dysprosium(III) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "13537-09-2" };
        casnr.formula("DyH3").synonym("dysprosium(III) hydride");
        casnr.check();
    }
    {
        cas_number casnr { "36377-94-3" };
        casnr.formula("DyI2").synonym("dysprosium(II) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "15474-63-2" };
        casnr.formula("DyI3").synonym("dysprosium(III) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "12019-88-4" };
        casnr.formula("DyN").synonym("dysprosium(III) nitride");
        casnr.check();
    }
    {
        cas_number casnr { "12133-07-2" };
        casnr.formula("DySi2").synonym("dysprosium(II) silicide");
        casnr.check();
    }
    {
        cas_number casnr { "1308-87-8" };
        casnr.formula("Dy2O3").synonym("dysprosium(III) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "12133-10-7" };
        casnr.formula("Dy2S3").synonym("dysprosium(III) sulfide");
        casnr.check();
    }
}
