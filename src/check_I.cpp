#include "check_I.h"
#include "cas_number.h"

void check_I()
{
    {
        cas_number casnr { "7789-33-5" };
        casnr.formula("IBr").synonym("iodine monobromide");
        casnr.check();
    }
    {
        cas_number casnr { "7790-99-0" };
        casnr.formula("ICl").synonym("iodine monochloride");
        casnr.check();
    }
    {
        cas_number casnr { "865-44-1" };
        casnr.formula("ICl3").synonym("iodine trichloride");
        casnr.check();
    }
    {
        cas_number casnr { "13873-84-2" };
        casnr.formula("IF").synonym("iodine monofluoride");
        casnr.check();
    }
    {
        cas_number casnr { "22520-96-3" };
        casnr.formula("IF3").synonym("iodine(III) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "7783-66-6" };
        casnr.formula("IF5").synonym("iodine pentafluoride");
        casnr.check();
    }
    {
        cas_number casnr { "16921-96-3" };
        casnr.formula("IF7").synonym("iodine heptafluoride");
        casnr.check();
    }
    {
        cas_number casnr { "14696-82-3" };
        casnr.formula("IN3").synonym("iodine monoazide");
        casnr.check();
    }
    {
        cas_number casnr { "12399-08-5" };
        casnr.formula("I2O4").synonym("diiodine tetroxide");
        casnr.check();
    }
    {
        cas_number casnr { "12029-98-0" };
        casnr.formula("I2O5").synonym("diiodine pentoxide");
        casnr.check();
    }
    {
        cas_number casnr { "1303-11-3" };
        casnr.formula("InAs").synonym("indium(III) arsenide");
        casnr.check();
    }
    {
        cas_number casnr { "14280-53-6" };
        casnr.formula("InBr").synonym("indium(I) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "21264-43-7" };
        casnr.formula("InBr2").synonym("indium(II) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "13465-09-3" };
        casnr.formula("InBr3").synonym("indium(III) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "25114-58-3" };
        casnr.formula("In(C2H3O2)3").synonym("indium(III) acetate");
        casnr.check();
    }
    {
        cas_number casnr { "13465-10-6" };
        casnr.formula("InCl").synonym("indium(I) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "13465-11-7" };
        casnr.formula("InCl2").synonym("indium(II) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "10025-82-8" };
        casnr.formula("InCl3").synonym("indium(III) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "74508-07-9" };
        casnr.formula("InF").synonym("indium(I) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "7783-52-0" };
        casnr.formula("InF3").synonym("indium(III) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "14166-78-0" };
        casnr.formula("InF3•3H2O").synonym("indium(III) fluoride trihydrate");
        casnr.check();
    }
    {
        cas_number casnr { "7783-52-0" };
        casnr.formula("InF3•9H2O").synonym("indium(III) fluoride nonahydrate");
        casnr.check();
    }
    {
        cas_number casnr { "13939-13-4" };
        casnr.formula("InH").synonym("indium(I) hydride");
        casnr.check();
    }
    {
        cas_number casnr { "13465-10-6" };
        casnr.formula("InI").synonym("indium(I) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "13510-35-5" };
        casnr.formula("InI3").synonym("indium(III) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "25617-98-5" };
        casnr.formula("InN").synonym("indium(III) nitride");
        casnr.check();
    }
    {
        cas_number casnr { "20661-21-6" };
        casnr.formula("In(OH)3").synonym("indium(III) hydroxide");
        casnr.check();
    }
    {
        cas_number casnr { "22398-80-7" };
        casnr.formula("InP").synonym("indium(III) phosphide");
        casnr.check();
    }
    {
        cas_number casnr { "14693-82-4" };
        casnr.formula("InPO4").synonym("indium(III) phosphate");
        casnr.check();
    }
    {
        cas_number casnr { "12030-14-7" };
        casnr.formula("InS").synonym("indium(II) sulfide");
        casnr.check();
    }
    {
        cas_number casnr { "1312-41-0" };
        casnr.formula("InSb").synonym("indium(III) antimonide");
        casnr.check();
    }
    {
        cas_number casnr { "1312-42-1" };
        casnr.formula("InSe").synonym("indium(II) selenide");
        casnr.check();
    }
    {
        cas_number casnr { "12030-19-2" };
        casnr.formula("InTe").synonym("indium(II) telluride");
        casnr.check();
    }
    {
        cas_number casnr { "13779-78-7" };
        casnr.formula("In2I4").synonym("indium(I,III) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "1312-43-2" };
        casnr.formula("In2O3").synonym("indium(III) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "13464-82-9" };
        casnr.formula("In2(SO4)3").synonym("indium(III) sulfate");
        casnr.check();
    }
    {
        cas_number casnr { "12030-24-9" };
        casnr.formula("In2S3").synonym("indium(III) sulfide");
        casnr.check();
    }
    {
        cas_number casnr { "1312-42-1" };
        casnr.formula("In2Se3").synonym("indium(III) selenide");
        casnr.check();
    }
    {
        cas_number casnr { "1312-45-4" };
        casnr.formula("In2Te3").synonym("indium(III) telluride");
        casnr.check();
    }
    {
        cas_number casnr { "77791-70-9" };
        casnr.formula("IrBr2").synonym("iridium(II) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "10049-24-8" };
        casnr.formula("IrBr3").synonym("iridium(III) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "7789-64-2" };
        casnr.formula("IrBr4").synonym("iridium(IV) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "13465-17-3" };
        casnr.formula("IrCl2").synonym("iridium(II) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "10025-83-9" };
        casnr.formula("IrCl3").synonym("iridium(III) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "10025-97-5" };
        casnr.formula("IrCl4").synonym("iridium(IV) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "23370-59-4" };
        casnr.formula("IrF3").synonym("iridium(III) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "37501-24-9" };
        casnr.formula("IrF4").synonym("iridium(IV) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "14568-19-5" };
        casnr.formula("IrF5").synonym("iridium(V) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "7783-75-7" };
        casnr.formula("IrF6").synonym("iridium(VI) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "19253-38-4" };
        casnr.formula("IrI2").synonym("iridium(II) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "7790-41-2" };
        casnr.formula("IrI3").synonym("iridium(III) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "7790-45-6" };
        casnr.formula("IrI4").synonym("iridium(IV) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "12030-49-8" };
        casnr.formula("IrO2").synonym("iridium(IV) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "30980-84-8" };
        casnr.formula("IrO2•2H2O").synonym("iridium(IV) oxide dihydrate");
        casnr.check();
    }
    {
        cas_number casnr { "12030-51-2" };
        casnr.formula("IrS2").synonym("iridium(IV) sulfide");
        casnr.check();
    }
    {
        cas_number casnr { "12030-55-6" };
        casnr.formula("IrSe2").synonym("iridium(IV) selenide");
        casnr.check();
    }
    {
        cas_number casnr { "12196-62-2" };
        casnr.formula("IrTe3").synonym("iridium(VI) telluride");
        casnr.check();
    }
    {
        cas_number casnr { "12030-49-8" };
        casnr.formula("Ir2O3").synonym("iridium(III) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "12136-42-4" };
        casnr.formula("Ir2S3").synonym("iridium(III) sulfide");
        casnr.check();
    }
}
