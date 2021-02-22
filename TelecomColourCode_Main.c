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


/*------ module includes --------*/
#include "TelecomColourCode_Main.h"

/*=============================================================================
 =======               DEFINES & MACROS FOR GENERAL PURPOSE              =======
 =============================================================================*/

/*=============================================================================
 =======                       CONSTANTS  &  TYPES                       =======
 =============================================================================*/
 
/*=============================================================================
 =======                VARIABLES & MESSAGES & RESSOURCEN                =======
 ==============================================================================*/
 

/*=============================================================================
 =======                              METHODS                            =======
 =============================================================================*/
 
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

int main() {
    //test
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
