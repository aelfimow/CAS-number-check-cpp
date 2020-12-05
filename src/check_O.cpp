#include "check_O.h"
#include "cas_number.h"

void check_O()
{
    {
        cas_number casnr { "7783-41-7" };
        casnr.formula("OF2").synonym("oxygen(II) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "7783-44-0" };
        casnr.formula("O2F2").synonym("oxygen(I) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "59201-51-3" };
        casnr.formula("OsBr3").synonym("osmium(III) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "59201-52-4" };
        casnr.formula("OsBr4").synonym("osmium(IV) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "1273-81-0" };
        casnr.formula("Os(C5H5)2").synonym("osmium(II) cyclopentadienide");
        casnr.check();
    }
    {
        cas_number casnr { "13444-93-4" };
        casnr.formula("OsCl3").synonym("osmium(III) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "114268-63-2" };
        casnr.formula("OsCl3•3H2O").synonym("osmium(III) chloride trihydrate");
        casnr.check();
    }
    {
        cas_number casnr { "10026-01-4" };
        casnr.formula("OsCl4").synonym("osmium(IV) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "71328-74-0" };
        casnr.formula("OsCl5").synonym("osmium(V) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "54120-05-7" };
        casnr.formula("OsF4").synonym("osmium(IV) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "31576-40-6" };
        casnr.formula("(OsF5)4").synonym("osmium(V) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "13768-38-2" };
        casnr.formula("OsF6").synonym("osmium(VI) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "16949-69-2" };
        casnr.formula("OsF7").synonym("osmium(VII) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "18432-81-0" };
        casnr.formula("OsF8").synonym("osmium(VIII) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "76758-38-8" };
        casnr.formula("OsI").synonym("osmium(I) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "59201-57-9" };
        casnr.formula("OsI2").synonym("osmium(II) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "59201-58-0" };
        casnr.formula("OsI3").synonym("osmium(III) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "12036-02-1" };
        casnr.formula("OsO2").synonym("osmium(IV) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "20816-12-0" };
        casnr.formula("OsO4").synonym("osmium(VIII) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "12137-61-0" };
        casnr.formula("OsS2").synonym("osmium(IV) sulfide");
        casnr.check();
    }
    {
        cas_number casnr { "12310-19-9" };
        casnr.formula("OsSe2").synonym("osmium(IV) selenide");
        casnr.check();
    }
    {
        cas_number casnr { "12166-21-1" };
        casnr.formula("OsTe2").synonym("osmium(IV) telluride");
        casnr.check();
    }
}
