#include "check_C.h"
#include "cas_number.h"

void check_C()
{
    {
        cas_number casnr { "6381-92-6" };
        casnr.formula("C10H16N2O8").synonym("Ethylenediaminetetraacetic acid (EDTA)");
        casnr.check();
    }
    {
        cas_number casnr { "57-50-1" };
        casnr.formula("C12H22O11").synonym("sucrose");
        casnr.check();
    }
    {
        cas_number casnr { "50-37-3" };
        casnr.formula("C20H25N30").synonym("Lysergic acid diethylamide (LSD)");
        casnr.check();
    }
    {
        cas_number casnr { "9048-49-1" };
        casnr.formula("C123H193N35O37").synonym("Common serum albumin (macromolecule)");
        casnr.check();
    }
    {
        cas_number casnr { "16941-10-9" };
        casnr.formula("Ca(AlH4)2").synonym("calcium tetrahydroaluminate");
        casnr.check();
    }
    {
        cas_number casnr { "12042-68-1" };
        casnr.formula("CaAl2O4").synonym("calcium aluminate");
        casnr.check();
    }
    {
        cas_number casnr { "12007-99-7" };
        casnr.formula("CaB6").synonym("calcium boride");
        casnr.check();
    }
    {
        cas_number casnr { "7789-41-5" };
        casnr.formula("CaBr2").synonym("calcium bromide");
        casnr.check();
    }
    {
        cas_number casnr { "544-17-2" };
        casnr.formula("Ca(CHO2)2").synonym("calcium formate");
        casnr.check();
    }
    {
        cas_number casnr { "592-01-8" };
        casnr.formula("Ca(CN)2").synonym("calcium cyanide");
        casnr.check();
    }
    {
        cas_number casnr { "156-62-7" };
        casnr.formula("CaCN2").synonym("calcium cyanamide");
        casnr.check();
    }
    {
        cas_number casnr { "471-34-1" };
        casnr.formula("CaCO3").synonym("calcium carbonate");
        casnr.check();
    }
    {
        cas_number casnr { "75-20-7" };
        casnr.formula("CaC2").synonym("calcium carbide");
        casnr.check();
    }
    {
        cas_number casnr { "19855-56-2" };
        casnr.formula("Ca(C2HO2)2").synonym("calcium fumarate");
        casnr.check();
    }
    {
        cas_number casnr { "62-54-4" };
        casnr.formula("Ca(C2H3O2)2").synonym("calcium acetate");
        casnr.check();
    }
    {
        cas_number casnr { "563-72-4" };
        casnr.formula("CaC2O4").synonym("calcium oxalate");
        casnr.check();
    }
    {
        cas_number casnr { "4075-81-4" };
        casnr.formula("Ca(C3H5O2)2").synonym("calcium propionate");
        casnr.check();
    }
    {
        cas_number casnr { "10137-74-3" };
        casnr.formula("Ca(ClO3)2").synonym("calcium chlorate");
        casnr.check();
    }
    {
        cas_number casnr { "13477-36-6" };
        casnr.formula("Ca(ClO4)2").synonym("calcium perchlorate");
        casnr.check();
    }
    {
        cas_number casnr { "10043-52-4" };
        casnr.formula("CaCl2").synonym("calcium chloride");
        casnr.check();
    }
    {
        cas_number casnr { "7774-34-7" };
        casnr.formula("CaCl2•6H2O").synonym("calcium chloride hexahydrate");
        casnr.check();
    }
    {
        cas_number casnr { "7778-54-3" };
        casnr.formula("CaCl2O2").synonym("calcium hypochlorite");
        casnr.check();
    }
    {
        cas_number casnr { "14307-33-6" };
        casnr.formula("CaCr2O7").synonym("calcium chromate");
        casnr.check();
    }
    {
        cas_number casnr { "7789-75-5" };
        casnr.formula("CaF2").synonym("calcium fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "7757-93-9" };
        casnr.formula("CaHPO4").synonym("calcium hydrogenorthophosphate");
        casnr.check();
    }
    {
        cas_number casnr { "7789-78-8" };
        casnr.formula("CaH2").synonym("calcium hydride");
        casnr.check();
    }
    {
        cas_number casnr { "7789-79-9" };
        casnr.formula("Ca(H2PO2)2").synonym("calcium hypophosphite");
        casnr.check();
    }
    {
        cas_number casnr { "7758-23-8" };
        casnr.formula("Ca(H2PO4)2").synonym("calcium dihydrogen phosphate monohydrate");
        casnr.check();
    }
    {
        cas_number casnr { "7789-80-2" };
        casnr.formula("Ca(IO3)2").synonym("calcium iodate");
        casnr.check();
    }
    {
        cas_number casnr { "10102-68-8" };
        casnr.formula("CaI2").synonym("calcium iodide");
        casnr.check();
    }
    {
        cas_number casnr { "10118-76-0" };
        casnr.formula("Ca(MnO4)2").synonym("calcium permanganate");
        casnr.check();
    }
    {
        cas_number casnr { "7789-82-4" };
        casnr.formula("CaMoO4").synonym("calcium molybdate");
        casnr.check();
    }
    {
        cas_number casnr { "13780-06-8" };
        casnr.formula("Ca(NO2)2").synonym("calcium nitrite");
        casnr.check();
    }
    {
        cas_number casnr { "10124-37-5" };
        casnr.formula("Ca(NO3)2").synonym("calcium nitrate");
        casnr.check();
    }
    {
        cas_number casnr { "1305-78-8" };
        casnr.formula("CaO").synonym("calcium oxide");
        casnr.check();
    }
    {
        cas_number casnr { "1305-62-0" };
        casnr.formula("Ca(OH)2").synonym("calcium hydroxide");
        casnr.check();
    }
    {
        cas_number casnr { "1305-79-9" };
        casnr.formula("CaO2").synonym("calcium peroxide");
        casnr.check();
    }
    {
        cas_number casnr { "13768-54-2" };
        casnr.formula("CaRe2O8").synonym("calcium perrhenate");
        casnr.check();
    }
    {
        cas_number casnr { "20548-54-3" };
        casnr.formula("CaS").synonym("calcium sulfide");
        casnr.check();
    }
    {
        cas_number casnr { "7778-18-9" };
        casnr.formula("CaSO4").synonym("calcium sulfate");
        casnr.check();
    }
    {
        cas_number casnr { "1305-84-6" };
        casnr.formula("CaSe").synonym("calcium selenide");
        casnr.check();
    }
    {
        cas_number casnr { "1344-95-2" };
        casnr.formula("CaSiO3").synonym("calcium metasilicate");
        casnr.check();
    }
    {
        cas_number casnr { "12013-56-8" };
        casnr.formula("CaSi2").synonym("calcium silicide");
        casnr.check();
    }
    {
        cas_number casnr { "12013-57-9" };
        casnr.formula("CaTe").synonym("calcium telluride");
        casnr.check();
    }
    {
        cas_number casnr { "12049-50-2" };
        casnr.formula("CaTiO3").synonym("calcium titanate");
        casnr.check();
    }
    {
        cas_number casnr { "7790-75-2" };
        casnr.formula("CaWO4").synonym("calcium tungstate");
        casnr.check();
    }
    {
        cas_number casnr { "7790-76-3" };
        casnr.formula("Ca2P2O7").synonym("calcium pyrophosphate");
        casnr.check();
    }
    {
        cas_number casnr { "1344-95-2" };
        casnr.formula("Ca2SiO4").synonym("calcium silicate");
        casnr.check();
    }
    {
        cas_number casnr { "7778-44-1" };
        casnr.formula("Ca3(AsO4)2").synonym("calcium arsenate");
        casnr.check();
    }
    {
        cas_number casnr { "5785-44-4" };
        casnr.formula("Ca3(C6H15O7)2").synonym("calcium citrate");
        casnr.check();
    }
    {
        cas_number casnr { "12013-82-0" };
        casnr.formula("Ca3N2").synonym("calcium nitride");
        casnr.check();
    }
    {
        cas_number casnr { "7758-87-4" };
        casnr.formula("Ca3(PO4)2").synonym("calcium phosphate");
        casnr.check();
    }
    {
        cas_number casnr { "1305-99-3" };
        casnr.formula("Ca3P2").synonym("calcium phosphide");
        casnr.check();
    }
    {
        cas_number casnr { "7789-42-6" };
        casnr.formula("CdBr2").synonym("cadmium bromide");
        casnr.check();
    }
    {
        cas_number casnr { "542-83-6" };
        casnr.formula("Cd(CN)2").synonym("cadmium cyanide");
        casnr.check();
    }
    {
        cas_number casnr { "513-78-0" };
        casnr.formula("CdCO3").synonym("cadmium carbonate");
        casnr.check();
    }
    {
        cas_number casnr { "543-90-8" };
        casnr.formula("Cd(C2H3O2)2").synonym("cadmium acetate");
        casnr.check();
    }
    {
        cas_number casnr { "814-88-0" };
        casnr.formula("CdC2O4").synonym("cadmium oxalate");
        casnr.check();
    }
    {
        cas_number casnr { "10108-64-2" };
        casnr.formula("CdCl2").synonym("cadmium chloride");
        casnr.check();
    }
    {
        cas_number casnr { "14312-00-6" };
        casnr.formula("CdCrO4").synonym("cadmium chromate");
        casnr.check();
    }
    {
        cas_number casnr { "7790-79-6" };
        casnr.formula("CdF2").synonym("cadmium fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "7790-81-0" };
        casnr.formula("Cd(IO3)2").synonym("cadmium iodate");
        casnr.check();
    }
    {
        cas_number casnr { "7790-80-9" };
        casnr.formula("CdI2").synonym("cadmium iodide");
        casnr.check();
    }
    {
        cas_number casnr { "13972-68-4" };
        casnr.formula("CdMoO4").synonym("cadmium molybdate");
        casnr.check();
    }
    {
        cas_number casnr { "10325-94-7" };
        casnr.formula("Cd(NO3)2").synonym("cadmium nitrate");
        casnr.check();
    }
    {
        cas_number casnr { "14215-29-3" };
        casnr.formula("Cd(N3)2").synonym("cadmium azide");
        casnr.check();
    }
    {
        cas_number casnr { "1306-19-0" };
        casnr.formula("CdO").synonym("cadmium oxide");
        casnr.check();
    }
    {
        cas_number casnr { "21041-95-2" };
        casnr.formula("Cd(OH)2").synonym("cadmium hydroxide");
        casnr.check();
    }
    {
        cas_number casnr { "1306-23-6" };
        casnr.formula("CdS").synonym("cadmium sulfide");
        casnr.check();
    }
    {
        cas_number casnr { "10124-36-4" };
        casnr.formula("CdSO4").synonym("cadmium sulfate");
        casnr.check();
    }
    {
        cas_number casnr { "12014-29-8" };
        casnr.formula("CdSb").synonym("cadmium antimonide");
        casnr.check();
    }
    {
        cas_number casnr { "1306-24-7" };
        casnr.formula("CdSe").synonym("cadmium selenide");
        casnr.check();
    }
    {
        cas_number casnr { "13477-19-5" };
        casnr.formula("CdSiO3").synonym("cadmium silicate");
        casnr.check();
    }
    {
        cas_number casnr { "1306-25-8" };
        casnr.formula("CdTe").synonym("cadmium telluride");
        casnr.check();
    }
    {
        cas_number casnr { "12014-14-1" };
        casnr.formula("CdTiO4").synonym("cadmium titanate");
        casnr.check();
    }
    {
        cas_number casnr { "7790-85-4" };
        casnr.formula("CdWO4").synonym("cadmium tungstate");
        casnr.check();
    }
    {
        cas_number casnr { "12187-14-3" };
        casnr.formula("Cd2Nb2O7").synonym("cadmium niobate");
        casnr.check();
    }
    {
        cas_number casnr { "12006-15-4" };
        casnr.formula("Cd3As2").synonym("cadmium arsenide");
        casnr.check();
    }
    {
        cas_number casnr { "12014-28-7" };
        casnr.formula("Cd3P2").synonym("cadmium phosphide");
        casnr.check();
    }
    {
        cas_number casnr { "12380-95-9" };
        casnr.formula("Cd3N2").synonym("cadmium nitride");
        casnr.check();
    }
    {
        cas_number casnr { "7790-86-5" };
        casnr.formula("CeBr3").synonym("cerium(III) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "3252-51-5" };
        casnr.formula("Ce(CHO2)3").synonym("cerium(III) formate");
        casnr.check();
    }
    {
        cas_number casnr { "7790-86-5" };
        casnr.formula("CeCl3").synonym("cerium(III) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "22655-57-8" };
        casnr.formula("CeF2").synonym("cerium(II) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "7758-88-5" };
        casnr.formula("CeF3").synonym("cerium(III) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "10060-10-3" };
        casnr.formula("CeF4").synonym("cerium(IV) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "13569-50-1" };
        casnr.formula("CeH2").synonym("cerium(II) hydride");
        casnr.check();
    }
    {
        cas_number casnr { "19139-47-0" };
        casnr.formula("CeI2").synonym("cerium(II) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "7790-87-6" };
        casnr.formula("CeI3").synonym("cerium(III) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "25764-08-3" };
        casnr.formula("CeN").synonym("cerium(III) nitride");
        casnr.check();
    }
    {
        cas_number casnr { "1306-38-3" };
        casnr.formula("CeO2").synonym("cerium(IV) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "12014-82-3" };
        casnr.formula("CeS").synonym("cerium(II) sulfide");
        casnr.check();
    }
    {
        cas_number casnr { "13597-19-8" };
        casnr.formula("CeVO2").synonym("cerium(III) vanadate");
        casnr.check();
    }
    {
        cas_number casnr { "15750-47-7" };
        casnr.formula("Ce2(C2O4)3").synonym("cerium(III) oxalate");
        casnr.check();
    }
    {
        cas_number casnr { "1306-38-3" };
        casnr.formula("Ce2O3").synonym("cerium(III) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "12014-93-6" };
        casnr.formula("Ce2S3").synonym("cerium(III) sulfide");
        casnr.check();
    }
    {
        cas_number casnr { "36700-18-2" };
        casnr.formula("CfBr2").synonym("californium(II) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "20758-68-3" };
        casnr.formula("CfBr3").synonym("californium(III) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "99643-99-9" };
        casnr.formula("CfCl2").synonym("californium(II) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "13536-90-8" };
        casnr.formula("CfCl3").synonym("californium(III) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "42775-52-0" };
        casnr.formula("CfF3").synonym("californium(III) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "42845-08-9" };
        casnr.formula("CfF4").synonym("californium(IV) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "49774-08-5" };
        casnr.formula("CfI2").synonym("californium(II) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "20758-81-0" };
        casnr.formula("CfI3").synonym("californium(III) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "12015-10-0" };
        casnr.formula("CfO2").synonym("californium(IV) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "12050-91-8" };
        casnr.formula("Cf2O3").synonym("californium(III) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "67-68-5" };
        casnr.formula("(CH3)2SO").synonym("Dimethyl sulfoxide (DMSO)");
        casnr.check();
    }
    {
        cas_number casnr { "7790-89-8" };
        casnr.formula("ClF").synonym("chlorine monofluoride");
        casnr.check();
    }
    {
        cas_number casnr { "7790-91-2" };
        casnr.formula("ClF3").synonym("chlorine trifluoride");
        casnr.check();
    }
    {
        cas_number casnr { "13637-63-3" };
        casnr.formula("ClF5").synonym("chlorine pentafluoride");
        casnr.check();
    }
    {
        cas_number casnr { "27218-16-2" };
        casnr.formula("ClOClO3").synonym("chlorine perchlorate");
        casnr.check();
    }
    {
        cas_number casnr { "7791-21-1" };
        casnr.formula("Cl2O").synonym("chlorine monoxide");
        casnr.check();
    }
    {
        cas_number casnr { "10049-04-4" };
        casnr.formula("ClO2").synonym("chlorine dioxide");
        casnr.check();
    }
    {
        cas_number casnr { "17496-59-2" };
        casnr.formula("Cl2O3").synonym("chlorine trioxide");
        casnr.check();
    }
    {
        cas_number casnr { "12442-63-6" };
        casnr.formula("Cl2O6").synonym("chlorine hexoxide");
        casnr.check();
    }
    {
        cas_number casnr { "10294-48-1" };
        casnr.formula("Cl2O7").synonym("chlorine heptoxide");
        casnr.check();
    }
    {
        cas_number casnr { "14890-42-7" };
        casnr.formula("CmBr3").synonym("curium(III) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "13537-20-7" };
        casnr.formula("CmCl3").synonym("curium(III) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "13708-79-7" };
        casnr.formula("CmF3").synonym("curium(III) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "24311-95-3" };
        casnr.formula("CmF4").synonym("curium(IV) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "14696-85-6" };
        casnr.formula("CmI3").synonym("curium(III) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "24762-86-5" };
        casnr.formula("CmO").synonym("curium(II) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "12016-67-0" };
        casnr.formula("CmO2").synonym("curium(IV) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "12371-27-6" };
        casnr.formula("Cm2O3").synonym("curium(III) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "74-90-8" };
        casnr.formula("Cn").synonym("cyanide");
        casnr.check();
    }
    {
        cas_number casnr { "13820-62-7" };
        casnr.formula("CoAl2O4").synonym("cobalt(II) aluminate");
        casnr.check();
    }
    {
        cas_number casnr { "7789-43-7" };
        casnr.formula("CoBr2").synonym("cobalt(II) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "542-84-7" };
        casnr.formula("Co(CN)2").synonym("cobalt(II) cyanide");
        casnr.check();
    }
    {
        cas_number casnr { "71-48-7" };
        casnr.formula("Co(C2H3O2)2").synonym("cobalt(II) acetate");
        casnr.check();
    }
    {
        cas_number casnr { "6147-53-1" };
        casnr.formula("Co(C2H3O2)2").synonym("cobalt(II) acetate tetrahydrate");
        casnr.check();
    }
    {
        cas_number casnr { "814-89-1" };
        casnr.formula("CoC2O4").synonym("cobalt(II) oxalate");
        casnr.check();
    }
    {
        cas_number casnr { "61789-51-3" };
        casnr.formula("Co(C11H10O2)2").synonym("cobalt(II) naphthenate");
        casnr.check();
    }
    {
        cas_number casnr { "21679-46-9" };
        casnr.formula("CoC15H21O6").synonym("cobalt(III) acetylacetonate");
        casnr.check();
    }
    {
        cas_number casnr { "13455-31-7" };
        casnr.formula("Co(ClO4)2").synonym("cobalt(II) perchlorate");
        casnr.check();
    }
    {
        cas_number casnr { "7646-79-9" };
        casnr.formula("CoCl2").synonym("cobalt(II) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "7791-13-1" };
        casnr.formula("CoCl2•6H2O").synonym("cobalt(II) chloride hexahydrate");
        casnr.check();
    }
    {
        cas_number casnr { "10241-04-0" };
        casnr.formula("CoCl3").synonym("cobalt(III) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "24613-38-5" };
        casnr.formula("CoCrO4").synonym("cobalt(II) chromate");
        casnr.check();
    }
    {
        cas_number casnr { "13455-25-9" };
        casnr.formula("CoCr2O4").synonym("cobalt(II) chromite");
        casnr.check();
    }
    {
        cas_number casnr { "10026-17-2" };
        casnr.formula("CoF2").synonym("cobalt(II) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "10026-18-3" };
        casnr.formula("CoF3").synonym("cobalt(III) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "13596-45-7" };
        casnr.formula("CoF4").synonym("cobalt(IV) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "15238-00-3" };
        casnr.formula("CoI2").synonym("cobalt(II) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "13455-28-2" };
        casnr.formula("Co(IO3)2").synonym("cobalt(II) iodate");
        casnr.check();
    }
    {
        cas_number casnr { "13762-14-6" };
        casnr.formula("CoMoO4").synonym("cobalt(II) molybdate");
        casnr.check();
    }
    {
        cas_number casnr { "10141-05-6" };
        casnr.formula("Co(NO3)2").synonym("cobalt(II) nitrate");
        casnr.check();
    }
    {
        cas_number casnr { "10026-22-9" };
        casnr.formula("Co(NO3)2•6H2O").synonym("cobalt(II) nitrate hexahydrate");
        casnr.check();
    }
    {
        cas_number casnr { "15520-84-0" };
        casnr.formula("Co(NO3)3").synonym("cobalt(III) nitrate");
        casnr.check();
    }
    {
        cas_number casnr { "1307-96-6" };
        casnr.formula("CoO").synonym("cobalt(II) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "21041-93-0" };
        casnr.formula("Co(OH)2").synonym("cobalt(II) hydroxide");
        casnr.check();
    }
    {
        cas_number casnr { "1307-86-4" };
        casnr.formula("Co(OH)3").synonym("cobalt(III) hydroxide");
        casnr.check();
    }
    {
        cas_number casnr { "1317-42-6" };
        casnr.formula("CoS").synonym("cobalt(II) sulfide");
        casnr.check();
    }
    {
        cas_number casnr { "12013-10-4" };
        casnr.formula("CoS2").synonym("cobalt(IV) sulfide");
        casnr.check();
    }
    {
        cas_number casnr { "1307-99-9" };
        casnr.formula("CoSe").synonym("cobalt(II) selenide");
        casnr.check();
    }
    {
        cas_number casnr { "12017-13-9" };
        casnr.formula("CoTe").synonym("cobalt(II) telluride");
        casnr.check();
    }
    {
        cas_number casnr { "12017-01-5" };
        casnr.formula("CoTiO3").synonym("cobalt(II) titanate");
        casnr.check();
    }
    {
        cas_number casnr { "12640-47-0" };
        casnr.formula("CoWO4").synonym("cobalt(II) tungstate");
        casnr.check();
    }
    {
        cas_number casnr { "1308-04-9" };
        casnr.formula("Co2O3").synonym("cobalt(III) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "12016-80-7" };
        casnr.formula("Co2O3•H2O").synonym("cobalt(III) oxide monohydrate");
        casnr.check();
    }
    {
        cas_number casnr { "10124-43-3" };
        casnr.formula("CoSO4").synonym("cobalt(II) sulfate");
        casnr.check();
    }
    {
        cas_number casnr { "1332-71-4" };
        casnr.formula("Co2S3").synonym("cobalt(III) sulfide");
        casnr.check();
    }
    {
        cas_number casnr { "12017-08-2" };
        casnr.formula("Co2SiO4").synonym("cobalt(II) orthosilicate");
        casnr.check();
    }
    {
        cas_number casnr { "12139-93-4" };
        casnr.formula("Co2SnO4").synonym("cobalt(II) stannate");
        casnr.check();
    }
    {
        cas_number casnr { "12017-38-8" };
        casnr.formula("Co2TiO4").synonym("cobalt(III) titanate");
        casnr.check();
    }
    {
        cas_number casnr { "14049-81-1" };
        casnr.formula("Co3(Fe(CN)6)2").synonym("cobalt(II) ferricyanide");
        casnr.check();
    }
    {
        cas_number casnr { "10049-25-9" };
        casnr.formula("CrBr2").synonym("chromium(II) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "10031-25-1" };
        casnr.formula("CrBr3").synonym("chromium(III) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "23098-84-2" };
        casnr.formula("CrBr4").synonym("chromium(IV) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "14639-25-9" };
        casnr.formula("Cr(C6H4NO2)3").synonym("chromium(III) picolinate");
        casnr.check();
    }
    {
        cas_number casnr { "13007-92-6" };
        casnr.formula("Cr(CO)6").synonym("chromium(VI) carbonyl");
        casnr.check();
    }
    {
        cas_number casnr { "10049-05-5" };
        casnr.formula("CrCl2").synonym("chromium(II) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "10025-73-7" };
        casnr.formula("CrCl3").synonym("chromium(III) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "15597-88-3" };
        casnr.formula("CrCl4").synonym("chromium(IV) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "10049-10-2" };
        casnr.formula("CrF2").synonym("chromium(II) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "7788-97-8" };
        casnr.formula("CrF3").synonym("chromium(III) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "10049-11-3" };
        casnr.formula("CrF4").synonym("chromium(IV) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "14884-42-5" };
        casnr.formula("CrF5").synonym("chromium(V) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "13843-28-2" };
        casnr.formula("CrF6").synonym("chromium(VI) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "13478-28-9" };
        casnr.formula("CrI2").synonym("chromium(II) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "13569-75-0" };
        casnr.formula("CrI3").synonym("chromium(III) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "23518-77-6" };
        casnr.formula("CrI4").synonym("chromium(IV) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "12053-27-9" };
        casnr.formula("CrN").synonym("chromium(III) nitride");
        casnr.check();
    }
    {
        cas_number casnr { "13548-38-4" };
        casnr.formula("Cr(NO3)3").synonym("chromium(III) nitrate");
        casnr.check();
    }
    {
        cas_number casnr { "12018-01-8" };
        casnr.formula("CrO2").synonym("chromium(IV) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "1333-82-0" };
        casnr.formula("CrO3").synonym("chromium(VI) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "7789-04-0" };
        casnr.formula("CrPO4").synonym("chromium(III) phosphate");
        casnr.check();
    }
    {
        cas_number casnr { "12053-13-3" };
        casnr.formula("CrSe").synonym("chromium(II) selenide");
        casnr.check();
    }
    {
        cas_number casnr { "7788-96-7" };
        casnr.formula("CrO2F2").synonym("chromyl fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "14977-61-8" };
        casnr.formula("CrO2Cl2").synonym("chromyl chloride");
        casnr.check();
    }
    {
        cas_number casnr { "1308-38-9" };
        casnr.formula("Cr2O3").synonym("chromium(III) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "10101-53-8" };
        casnr.formula("Cr2(SO4)3").synonym("chromium(III) sulfate");
        casnr.check();
    }
    {
        cas_number casnr { "12018-22-3" };
        casnr.formula("Cr2S3").synonym("chromium(III) sulfide");
        casnr.check();
    }
    {
        cas_number casnr { "12053-39-3" };
        casnr.formula("Cr2Te3").synonym("chromium(III) telluride");
        casnr.check();
    }
    {
        cas_number casnr { "12012-35-0" };
        casnr.formula("Cr3C2").synonym("chromium(II) carbide");
        casnr.check();
    }
    {
        cas_number casnr { "12018-34-7" };
        casnr.formula("Cr3O4").synonym("chromium(II,III) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "92141-86-1" };
        casnr.formula("CsBO2").synonym("caesium metaborate");
        casnr.check();
    }
    {
        cas_number casnr { "7787-69-1" };
        casnr.formula("CsBr").synonym("caesium bromide");
        casnr.check();
    }
    {
        cas_number casnr { "13454-75-6" };
        casnr.formula("CsBrO3").synonym("caesium bromate");
        casnr.check();
    }
    {
        cas_number casnr { "21159-32-0" };
        casnr.formula("CsCN").synonym("caesium cyanide");
        casnr.check();
    }
    {
        cas_number casnr { "3399-17-5" };
        casnr.formula("CsC2H3O2").synonym("caesium acetate");
        casnr.check();
    }
    {
        cas_number casnr { "7647-17-8" };
        casnr.formula("CsCl").synonym("caesium chloride");
        casnr.check();
    }
    {
        cas_number casnr { "13763-67-2" };
        casnr.formula("CsClO3").synonym("caesium chlorate");
        casnr.check();
    }
    {
        cas_number casnr { "13454-84-7" };
        casnr.formula("CsClO4").synonym("caesium perchlorate");
        casnr.check();
    }
    {
        cas_number casnr { "13400-13-0" };
        casnr.formula("CsF").synonym("caesium fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "58724-12-2" };
        casnr.formula("CsH").synonym("caesium hydride");
        casnr.check();
    }
    {
        cas_number casnr { "7789-17-5" };
        casnr.formula("CsI").synonym("caesium iodide");
        casnr.check();
    }
    {
        cas_number casnr { "13454-81-4" };
        casnr.formula("CsIO3").synonym("caesium iodate");
        casnr.check();
    }
    {
        cas_number casnr { "13478-04-1" };
        casnr.formula("CsIO4").synonym("caesium periodate");
        casnr.check();
    }
    {
        cas_number casnr { "13456-28-5" };
        casnr.formula("CsMnO4").synonym("caesium permanganate");
        casnr.check();
    }
    {
        cas_number casnr { "22205-57-8" };
        casnr.formula("CsNH2").synonym("caesium amide");
        casnr.check();
    }
    {
        cas_number casnr { "13454-83-6" };
        casnr.formula("CsNO2").synonym("caesium nitrite");
        casnr.check();
    }
    {
        cas_number casnr { "7789-18-6" };
        casnr.formula("CsNO3").synonym("caesium nitrate");
        casnr.check();
    }
    {
        cas_number casnr { "22750-57-8" };
        casnr.formula("CsN3").synonym("caesium azide");
        casnr.check();
    }
    {
        cas_number casnr { "21351-79-1" };
        casnr.formula("CsOH").synonym("caesium hydroxide");
        casnr.check();
    }
    {
        cas_number casnr { "12018-61-0" };
        casnr.formula("CsO2").synonym("caesium superoxide");
        casnr.check();
    }
    {
        cas_number casnr { "14644-55-4" };
        casnr.formula("CsVO3").synonym("caesium vanadate");
        casnr.check();
    }
    {
        cas_number casnr { "534-17-8" };
        casnr.formula("Cs2CO3").synonym("caesium carbonate");
        casnr.check();
    }
    {
        cas_number casnr { "1068-63-9" };
        casnr.formula("Cs2C2O4").synonym("caesium oxalate");
        casnr.check();
    }
    {
        cas_number casnr { "15683-21-3" };
        casnr.formula("Cs2CdI4").synonym("caesium tetraiodocadamate");
        casnr.check();
    }
    {
        cas_number casnr { "56320-90-2" };
        casnr.formula("Cs2CrO4").synonym("caesium chromate");
        casnr.check();
    }
    {
        cas_number casnr { "13597-64-3" };
        casnr.formula("Cs2MoO4").synonym("caesium molybdate");
        casnr.check();
    }
    {
        cas_number casnr { "20281-00-9" };
        casnr.formula("Cs2O").synonym("caesium oxide");
        casnr.check();
    }
    {
        cas_number casnr { "12053-70-2" };
        casnr.formula("Cs2O2").synonym("caesium peroxide");
        casnr.check();
    }
    {
        cas_number casnr { "12214-16-3" };
        casnr.formula("Cs2S").synonym("caesium sulfide");
        casnr.check();
    }
    {
        cas_number casnr { "10294-54-9" };
        casnr.formula("Cs2SO4").synonym("caesium sulfate");
        casnr.check();
    }
    {
        cas_number casnr { "31052-46-7" };
        casnr.formula("Cs2Se").synonym("caesium selenide");
        casnr.check();
    }
    {
        cas_number casnr { "12191-06-9" };
        casnr.formula("Cs2Te").synonym("caesium telluride");
        casnr.check();
    }
    {
        cas_number casnr { "13587-19-4" };
        casnr.formula("Cs2WO4").synonym("caesium tungstate");
        casnr.check();
    }
    {
        cas_number casnr { "15158-68-6" };
        casnr.formula("Cs2ZnI4").synonym("caesium tetraiodozincate");
        casnr.check();
    }
    {
        cas_number casnr { "14735-84-3" };
        casnr.formula("Cu(BF4)2").synonym("copper(II) tetrafluoroborate");
        casnr.check();
    }
    {
        cas_number casnr { "393290-85-2" };
        casnr.formula("Cu(BO2)2").synonym("copper(II) borate");
        casnr.check();
    }
    {
        cas_number casnr { "7787-70-4" };
        casnr.formula("CuBr").synonym("copper(I) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "7789-45-9" };
        casnr.formula("CuBr2").synonym("copper(II) bromide");
        casnr.check();
    }
    {
        cas_number casnr { "544-19-4" };
        casnr.formula("Cu(CHO2)2").synonym("copper(II) formate");
        casnr.check();
    }
    {
        cas_number casnr { "544-92-3" };
        casnr.formula("CuCN").synonym("copper(I) cyanide");
        casnr.check();
    }
    {
        cas_number casnr { "14763-77-0" };
        casnr.formula("Cu(CN)2").synonym("copper(II) cyanide");
        casnr.check();
    }
    {
        cas_number casnr { "1117-94-8" };
        casnr.formula("CuC2").synonym("copper(II) acetylide");
        casnr.check();
    }
    {
        cas_number casnr { "598-54-9" };
        casnr.formula("CuC2H3O2").synonym("copper(I) acetate");
        casnr.check();
    }
    {
        cas_number casnr { "142-71-2" };
        casnr.formula("Cu(C2H3O2)2").synonym("copper(II) acetate");
        casnr.check();
    }
    {
        cas_number casnr { "814-91-5" };
        casnr.formula("CuC2O4").synonym("copper(II) oxalate");
        casnr.check();
    }
    {
        cas_number casnr { "660-60-6" };
        casnr.formula("Cu(C16H35O2)2").synonym("copper(II) stearate");
        casnr.check();
    }
    {
        cas_number casnr { "1120-44-1" };
        casnr.formula("Cu(C18H33O2)2").synonym("copper(II) oleate");
        casnr.check();
    }
    {
        cas_number casnr { "7758-89-6" };
        casnr.formula("CuCl").synonym("copper(I) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "13770-18-8" };
        casnr.formula("Cu(ClO4)2").synonym("copper(II) perchlorate");
        casnr.check();
    }
    {
        cas_number casnr { "7447-39-4" };
        casnr.formula("CuCl2").synonym("copper(II) chloride");
        casnr.check();
    }
    {
        cas_number casnr { "10125-13-0" };
        casnr.formula("CuCl2•2H2O").synonym("copper(II) chloride dihydrate");
        casnr.check();
    }
    {
        cas_number casnr { "13548-42-0" };
        casnr.formula("CuCrO4").synonym("copper(II) chromate");
        casnr.check();
    }
    {
        cas_number casnr { "13478-41-6" };
        casnr.formula("CuF").synonym("copper(I) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "7789-19-7" };
        casnr.formula("CuF2").synonym("copper(II) fluoride");
        casnr.check();
    }
    {
        cas_number casnr { "13517-00-5" };
        casnr.formula("CuH").synonym("copper(I) hydride");
        casnr.check();
    }
    {
        cas_number casnr { "10290-12-7" };
        casnr.formula("CuHAsO3").synonym("copper(II) arsenite");
        casnr.check();
    }
    {
        cas_number casnr { "7681-65-4" };
        casnr.formula("CuI").synonym("copper(I) iodide");
        casnr.check();
    }
    {
        cas_number casnr { "13767-34-5" };
        casnr.formula("CuMoO4").synonym("copper(II) molybdate");
        casnr.check();
    }
    {
        cas_number casnr { "3251-23-8" };
        casnr.formula("Cu(NO3)2").synonym("copper(II) nitrate");
        casnr.check();
    }
    {
        cas_number casnr { "14336-80-2" };
        casnr.formula("CuN3").synonym("copper(I) azide");
        casnr.check();
    }
    {
        cas_number casnr { "14215-30-6" };
        casnr.formula("Cu(N3)2").synonym("copper(II) azide");
        casnr.check();
    }
    {
        cas_number casnr { "1317-38-0" };
        casnr.formula("CuO").synonym("copper(II) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "20427-59-2" };
        casnr.formula("Cu(OH)2").synonym("copper(II) hydroxide");
        casnr.check();
    }
    {
        cas_number casnr { "1317-40-4" };
        casnr.formula("CuS").synonym("copper(II) sulfide");
        casnr.check();
    }
    {
        cas_number casnr { "1111-67-7" };
        casnr.formula("CuSCN").synonym("copper(I) thiocyanate");
        casnr.check();
    }
    {
        cas_number casnr { "7758-98-7" };
        casnr.formula("CuSO4").synonym("copper(II) sulfate");
        casnr.check();
    }
    {
        cas_number casnr { "1317-41-5" };
        casnr.formula("CuSe").synonym("copper(II) selenide");
        casnr.check();
    }
    {
        cas_number casnr { "12019-23-7" };
        casnr.formula("CuTe").synonym("copper(II) telluride");
        casnr.check();
    }
    {
        cas_number casnr { "13587-35-4" };
        casnr.formula("CuWO4").synonym("copper(II) tungstate");
        casnr.check();
    }
    {
        cas_number casnr { "1117-94-8" };
        casnr.formula("Cu2C2").synonym("copper(I) acetylide");
        casnr.check();
    }
    {
        cas_number casnr { "13601-13-3" };
        casnr.formula("Cu2Fe(CN)6").synonym("copper(II) ferrocyanide");
        casnr.check();
    }
    {
        cas_number casnr { "1317-39-1" };
        casnr.formula("Cu2O").synonym("copper(I) oxide");
        casnr.check();
    }
    {
        cas_number casnr { "10102-90-6" };
        casnr.formula("Cu2P2O7").synonym("copper(II) pyrophosphate");
        casnr.check();
    }
    {
        cas_number casnr { "22205-45-4" };
        casnr.formula("Cu2S").synonym("copper(I) sulfide");
        casnr.check();
    }
    {
        cas_number casnr { "20405-64-5" };
        casnr.formula("Cu2Se").synonym("copper(I) selenide");
        casnr.check();
    }
    {
        cas_number casnr { "12019-52-2" };
        casnr.formula("Cu2Te").synonym("copper(I) telluride");
        casnr.check();
    }
    {
        cas_number casnr { "10103-61-4" };
        casnr.formula("Cu3(AsO4)2").synonym("copper(II) arsenate");
        casnr.check();
    }
}
