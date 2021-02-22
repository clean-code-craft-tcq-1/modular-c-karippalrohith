/* ******************************************************************************
 ***
 ***     \file        main.c
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
#include "TelecomColourCode_TestCombination.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames_a[colorPair->majorColor],
        MinorColorNames_a[colorPair->minorColor]);
}

int GetPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * numberOfMinorColors +
            colorPair->minorColor + 1;
}

void testPairToNumber(
    enum MajorColor_e major,
    enum MinorColor_e minor,
    int expectedPairNumber)
{
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}
