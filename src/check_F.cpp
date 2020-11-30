#include "check_F.h"
#include "cas_number.h"

void check_F()
{
    {
        cas_number casnr { "7789-26-6" };
        casnr.formula("FNO3").synonym("fluorine nitrate");
        casnr.check();
    }
    {
        cas_number casnr { "10049-03-3" };
        casnr.formula("FOClO3").synonym("fluorine perchlorate");
        casnr.check();
    }
    {
        cas_number casnr { "7783-41-7" };
        casnr.formula("F2O").synonym("fluorine monoxide");
        casnr.check();
    }
    {
        cas_number casnr { "7783-44-0" };
        casnr.formula("F2O2").synonym("fluorine dioxide");
        casnr.check();
    }
    {
        cas_number casnr { "7439-89-6" };
        casnr.formula("Fe").synonym("iron");
        casnr.check();
    }
    {
        cas_number casnr { "12068-49-4" };
        casnr.formula("Fe(AlO2)2").synonym("iron(II) aluminate");
        casnr.check();
    }
    {
        cas_number casnr { "12044-16-5" };
        casnr.formula("FeAs").synonym("iron(III) arsenic");
        casnr.check();
    }
    {
        cas_number casnr { "7789-46-0" };
        casnr.formula("FeBr2").synonym("iron(II) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "10031-26-2" };
        casnr.formula("FeBr3").synonym("iron(III) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "563-71-3" };
        casnr.formula("FeCO3").synonym("iron(II) carbonate");
        casnr.check();
    }
    {
        cas_number casnr { "3094-87-9" };
        casnr.formula("Fe(C2H3O2)2").synonym("iron(II) acetate");
        casnr.check();
    }
    {
        cas_number casnr { "7758-94-3" };
        casnr.formula("FeCl2").synonym("iron(II) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "16399-77-2" };
        casnr.formula("FeCl2•2H2O").synonym("iron(II) chloride dihydrate");
        casnr.check();
    }
    {
        cas_number casnr { "13478-10-9" };
        casnr.formula("FeCl2•4H2O").synonym("iron(II) chloride tetrahydrate");
        casnr.check();
    }
    {
        cas_number casnr { "7705-08-0" };
        casnr.formula("FeCl3").synonym("iron(III) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "10025-77-1" };
        casnr.formula("FeCl3•6H2O").synonym("iron(III) chloride hexahydrate");
        casnr.check();
    }
    {
        cas_number casnr { "1308-31-2" };
        casnr.formula("FeCr2O4").synonym("iron chromite");
        casnr.check();
    }
    {
        cas_number casnr { "7789-28-8" };
        casnr.formula("FeF2").synonym("iron(II) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "13940-89-1" };
        casnr.formula("FeF2•4H2O").synonym("iron(II) fluoride tetrahydrate");
        casnr.check();
    }
    {
        cas_number casnr { "7783-50-8" };
        casnr.formula("FeF3").synonym("iron(III) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "15469-38-2" };
        casnr.formula("FeF3•3H2O").synonym("iron(III) fluoride trihydrate");
        casnr.check();
    }
    {
        cas_number casnr { "7783-84-8" };
        casnr.formula("Fe(H2PO2)3").synonym("iron(III) hypophosphite");
        casnr.check();
    }
    {
        cas_number casnr { "7783-86-0" };
        casnr.formula("FeI2").synonym("iron(II) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "15600-49-4" };
        casnr.formula("FeI3").synonym("iron(III) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "13718-70-2" };
        casnr.formula("FeMoO4").synonym("iron(II) molybdate");
        casnr.check();
    }
    {
        cas_number casnr { "14013-86-6" };
        casnr.formula("Fe(NO3)2").synonym("iron(II) nitrate");
        casnr.check();
    }
    {
        cas_number casnr { "10421-48-4" };
        casnr.formula("Fe(NO3)3").synonym("ferric nitrate");
        casnr.check();
    }
    {
        cas_number casnr { "1345-25-1" };
        casnr.formula("FeO").synonym("iron(II) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "18624-44-7" };
        casnr.formula("Fe(OH)2").synonym("iron(II) hydroxide");
        casnr.check();
    }
    {
        cas_number casnr { "1309-33-7" };
        casnr.formula("Fe(OH)3").synonym("iron(III) hydroxide");
        casnr.check();
    }
    {
        cas_number casnr { "10045-86-0" };
        casnr.formula("FePO4").synonym("iron(III) phosphate");
        casnr.check();
    }
    {
        cas_number casnr { "1317-37-9" };
        casnr.formula("FeS").synonym("iron(II) sulfide");
        casnr.check();
    }
    {
        cas_number casnr { "7720-78-7" };
        casnr.formula("FeSO4").synonym("iron(II) sulfate");
        casnr.check();
    }
    {
        cas_number casnr { "1310-32-3" };
        casnr.formula("FeSe").synonym("iron(II) selenide");
        casnr.check();
    }
    {
        cas_number casnr { "12125-63-2" };
        casnr.formula("FeTe").synonym("iron(II) telluride");
        casnr.check();
    }
    {
        cas_number casnr { "12168-52-4" };
        casnr.formula("FeTiO4").synonym("iron(II) titanate");
        casnr.check();
    }
    {
        cas_number casnr { "65842-03-7" };
        casnr.formula("Fe(VO3)3").synonym("iron(III) metavanadate");
        casnr.check();
    }
    {
        cas_number casnr { "13870-24-1" };
        casnr.formula("FeWO4").synonym("iron(II) tungstate");
        casnr.check();
    }
    {
        cas_number casnr { "19469-07-9" };
        casnr.formula("Fe2(C2O4)3").synonym("iron(III) oxalate");
        casnr.check();
    }
    {
        cas_number casnr { "10294-52-7" };
        casnr.formula("Fe2(CrO4)3").synonym("iron(III) chromate");
        casnr.check();
    }
    {
        cas_number casnr { "10294-53-8" };
        casnr.formula("Fe2(Cr2O7)3").synonym("iron(III) dichromate");
        casnr.check();
    }
    {
        cas_number casnr { "1309-37-1" };
        casnr.formula("Fe2O3").synonym("iron(III) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "10028-22-5" };
        casnr.formula("Fe2(SO4)3").synonym("iron(III) sulfate");
        casnr.check();
    }
    {
        cas_number casnr { "10179-73-4" };
        casnr.formula("Fe2SiO4").synonym("iron(II) orthosilicate");
        casnr.check();
    }
    {
        cas_number casnr { "1317-61-9" };
        casnr.formula("Fe3O4").synonym("iron(II,III) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "14940-41-1" };
        casnr.formula("Fe3(PO4)2").synonym("iron(II) phosphate");
        casnr.check();
    }
    {
        cas_number casnr { "14038-43-8" };
        casnr.formula("Fe4(Fe(CN)6)3").synonym("iron(III) ferrocyanide");
        casnr.check();
    }
    {
        cas_number casnr { "10058-44-3" };
        casnr.formula("Fe4(P2O7)3").synonym("iron(III) pyrophosphate");
        casnr.check();
    }
}
