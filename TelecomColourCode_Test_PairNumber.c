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
#include "TelecomColourCode_Main.h"

void ColorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s",
        MajorColorNames_a[colorPair->majorColor],
        MinorColorNames_a[colorPair->minorColor]);
}

ColorPair GetColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = 
        (enum MajorColor_e)(zeroBasedPairNumber / numberOfMinorColors);
    colorPair.minorColor =
        (enum MinorColor_e)(zeroBasedPairNumber % numberOfMinorColors);
    return colorPair;
}

void testNumberToPair(int pairNumber,
    enum MajorColor_e expectedMajor,
    enum MinorColor_e expectedMinor)
{
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

void printColourCodeReference_Table(int colourIndex)
{
    ColorPair colorPair = GetColorFromPairNumber(colourIndex);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Pair %d\t\t\t%s\n", colourIndex, colorPairNames);
}
