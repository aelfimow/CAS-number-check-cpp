#include "check_U.h"
#include "cas_number.h"

void check_U()
{
    {
        cas_number casnr { "13470-19-4" };
        casnr.formula("UBr3").synonym("uranium(III) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "13470-20-7" };
        casnr.formula("UBr4").synonym("uranium(IV) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "13775-16-1" };
        casnr.formula("UBr5").synonym("uranium(V) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "12070-09-6" };
        casnr.formula("UC").synonym("uranium(IV) carbide");
        casnr.check();
    }
    {
        cas_number casnr { "12071-33-9" };
        casnr.formula("UC2").synonym("uranium(VI) carbide");
        casnr.check();
    }
    {
        cas_number casnr { "10025-93-1" };
        casnr.formula("UCl3").synonym("uranium(III) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "10026-10-5" };
        casnr.formula("UCl4").synonym("uranium(IV) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "13470-21-8" };
        casnr.formula("UCl5").synonym("uranium(V) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "13763-23-0" };
        casnr.formula("UCl6").synonym("uranium(VI) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "13775-06-9" };
        casnr.formula("UF3").synonym("uranium(III) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "10049-14-6" };
        casnr.formula("UF4").synonym("uranium(IV) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "13775-07-0" };
        casnr.formula("UF5").synonym("uranium(V) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "7783-81-5" };
        casnr.formula("UF6").synonym("uranium(VI) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "13598-56-6" };
        casnr.formula("UH3").synonym("uranium(III) hydride");
        casnr.check();
    }
    {
        cas_number casnr { "13775-18-3" };
        casnr.formula("UI3").synonym("uranium(III) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "13470-22-9" };
        casnr.formula("UI4").synonym("uranium(IV) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "25658-43-9" };
        casnr.formula("UN").synonym("uranium(III) nitride");
        casnr.check();
    }
    {
        cas_number casnr { "13598-56-6" };
        casnr.formula("UO").synonym("uranium(II) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "1344-57-6" };
        casnr.formula("UO2").synonym("uranium(IV) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "10102-06-4" };
        casnr.formula("UO2(NO3)2").synonym("uranyl nitrate");
        casnr.check();
    }
    {
        cas_number casnr { "1344-58-7" };
        casnr.formula("UO3").synonym("uranium(VI) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "12039-11-1" };
        casnr.formula("US").synonym("uranium(II) sulfide");
        casnr.check();
    }
    {
        cas_number casnr { "12138-23-7" };
        casnr.formula("USe3").synonym("uranium(VI) selenide");
        casnr.check();
    }
    {
        cas_number casnr { "12138-37-3" };
        casnr.formula("UTe2").synonym("uranium(IV) telluride");
        casnr.check();
    }
    {
        cas_number casnr { "12040-18-5" };
        casnr.formula("UTe3").synonym("uranium(VI) telluride");
        casnr.check();
    }
    {
        cas_number casnr { "12065-66-6" };
        casnr.formula("U2O5").synonym("uranium(V) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "12138-13-5" };
        casnr.formula("U2S3").synonym("uranium(II) sulfide");
        casnr.check();
    }
    {
        cas_number casnr { "12033-85-1" };
        casnr.formula("U3N2").synonym("uranium(II) nitride");
        casnr.check();
    }
    {
        cas_number casnr { "1344-59-8" };
        casnr.formula("U3O8").synonym("uranium(V,VI) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "12037-15-9" };
        casnr.formula("U4O9").synonym("uranium(IV,V) oxide");
        casnr.check();
    }
}
