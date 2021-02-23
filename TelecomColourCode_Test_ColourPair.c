/* ******************************************************************************
 ***
 ***     \file        TelecomColourCode_Test_ColourPair.c
 ***     \ingroup     Session1-TCQ
 ***     \author      Rohith K N
 ***
 ***     \brief       Source file to test the colour pair from Major and Minor colours
 ***
 ***     \par         File_description
 ***                  This file explores more about code modularity
 ***
 *****************************************************************************/
 
/*=============================================================================
 =======                            INCLUDES                             =======
 ============================================================================*/
 /*------ standard includes -------*/
#include <stdio.h>
#include <assert.h>

 /*------ module includes -------*/
#include "TelecomColourCode_Main.h"

/*---------------------------------------------------------------------------*/
/*     FUNCTION: TCC_GetPairNumberFromColor
 */
/*!    \brief   Function to derive the Pair code from the major and Minor colours
 *
 *
 *     \param    none
 *     \returns  int
 *
 *//*------------------------------------------------------------------------*/
int TCC_GetPairNumberFromColor(const ColorPair_s* colorPair) {
    return colorPair->majorColor * numberOfMinorColors_i +
            colorPair->minorColor + 1;
}

/*---------------------------------------------------------------------------*/
/*     FUNCTION: TCC_testColours_AgainstPairNumber
 */
/*!    \brief   Function to test pair code from Colour code
 *				
 *
 *     \param    major(enum) -> Major Colour
				 minor(enum) -> Minor Colour
				 expectedPairNumber -> Respective pair code of the referred Major and Minor colour
 *     \returns  void
 *
 *//*------------------------------------------------------------------------*/
void TCC_testColours_AgainstPairNumber(
    enum MajorColor_e major,
    enum MinorColor_e minor,
    int expectedPairNumber)
{
    ColorPair_s colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = TCC_GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
