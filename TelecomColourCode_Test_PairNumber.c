/* ******************************************************************************
 ***
 ***     \file        TelecomColourCode_Test_PairNumber.c
 ***     \ingroup     Session1-TCQ
 ***     \author      Rohith K N
 ***
 ***     \brief       Source file to explore more about code modularity
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
/*     FUNCTION: TCC_ColorPairToString
 */
/*!    \brief   Function to convert the elements to a string
 *
 *
 *     \param    colorPair -> 
				 buffer -> 
 *     \returns  void
 *
 *//*------------------------------------------------------------------------*/
void TCC_ColorPairToString(const ColorPair_s* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames_a[colorPair->majorColor],
        MinorColorNames_a[colorPair->minorColor]);
}

/*---------------------------------------------------------------------------*/
/*     FUNCTION: TCC_GetColorFromPairNumber
 */
/*!    \brief   Function to derive the major and Minor colours from the Pair code
 *
 *
 *     \param    pairNumber -> Pair number to be split into Major and Minor
 *     \returns  ColorPair_s
 *
 *//*------------------------------------------------------------------------*/
ColorPair_s TCC_GetColorFromPairNumber(int pairNumber) {
    ColorPair_s colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor_e)(zeroBasedPairNumber / numberOfMinorColors_i);
    colorPair.minorColor =
        (enum MinorColor_e)(zeroBasedPairNumber % numberOfMinorColors_i);
    return colorPair;
}

/*---------------------------------------------------------------------------*/
/*     FUNCTION: TCC_testPairNumber_AgaintColours
 */
/*!    \brief   Function to derive the Pair code from the major and Minor colours
 *
 *
 *     \param    pairNumber -> Pair number to be split into Major and Minor
				 expectedMajor -> Expected Major Colour of the respective pair code
				 expectedMinor -> Expected Minor Colour of the respective pair code
 *     \returns  void
 *
 *//*------------------------------------------------------------------------*/
void TCC_testPairNumber_AgaintColours(int pairNumber,
    enum MajorColor_e expectedMajor,
    enum MinorColor_e expectedMinor)
{
    ColorPair_s colorPair = TCC_GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR];
    TCC_ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}
