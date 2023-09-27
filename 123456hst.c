/* HALFSTARRE APPLICATIE */
/* --------------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456hst.c
      CCOL:   12.0
    TLCGEN:   12.4.0.2
   CCOLGEN:   12.4.0.2
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie     Datum        Ontwerper   Commentaar
 * 12.4.0.2   09-09-2023   TLCGen      Release versie TLCGen
 *
 ************************************************************************************/

#include "halfstar.c"
#include "tx_synch.h"
#include "halfstar_prio.c"

#include "123456hst.add"

void post_init_application_halfstar(void)
{
    post_init_application_halfstar_Add();
}

void pre_application_halfstar(void)
{
    PreApplication_halfstar_Add();
}

void KlokPerioden_halfstar(void)
{
    char volgMaster = TRUE;

    KlokPerioden_halfstar_Add();
}

void Aanvragen_halfstar(void)
{
    int fc;

    Aanvragen_halfstar_Add();
}

void Verlenggroen_halfstar(void)
{
    int fc;

    Maxgroen_halfstar_Add();
}

void Wachtgroen_halfstar(void)
{
    Wachtgroen_halfstar_Add();
}

void Meetkriterium_halfstar(void)
{
    int fc;

    Meetkriterium_halfstar_Add();
}

void Meeverlengen_halfstar(void)
{
    int fc;

    Meeverlengen_halfstar_Add();
}

void Synchronisaties_halfstar(void)
{
    int fc;

    Synchronisaties_halfstar_Add();
}

void Alternatief_halfstar(void)
{
    int fc;

}

void RealisatieAfhandeling_halfstar(void)
{
    int fc;

    RealisatieAfhandeling_halfstar_Add();
}

void FileVerwerking_halfstar(void)
{

    FileVerwerking_halfstar_Add();
}

void DetectieStoring_halfstar(void)
{
    DetectieStoring_halfstar_Add();
}

void PostApplication_halfstar(void)
{
    PostApplication_halfstar_Add();
}

void pre_system_application_halfstar(void)
{
    int fc;

    pre_system_application_halfstar_Add();
}

void post_system_application_halfstar(void)
{
    post_system_application_halfstar_Add();
}

void post_dump_application_halfstar(void)
{
    post_dump_application_halfstar_Add();
}

boolv application1_trig(void)
{
    return application1_tig_Add();
}

boolv application2_trig(void)
{
    return application2_tig_Add();
}

/* Deze functie wordt aangeroepen vanuit OVInstellingen() in 123456ov.c */
void PrioHalfstarSettings(void)
{
}

