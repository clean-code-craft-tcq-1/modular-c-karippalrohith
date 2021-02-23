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
const char* MajorColorNames_a[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames_a[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMajorColors = sizeof(MajorColorNames_a) / sizeof(MajorColorNames_a[0]);
int numberOfMinorColors = sizeof(MinorColorNames_a) / sizeof(MinorColorNames_a[0]);
/*=============================================================================
 =======                VARIABLES & MESSAGES & RESSOURCEN                =======
 ==============================================================================*/
 

/*=============================================================================
 =======                              METHODS                            =======
 =============================================================================*/
 
int main() {
    int colourIndex;
 
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
    
    /*Print Colour Reference*/
    printf("Colour Code   Major Colour   Minor Colour");
    for(colourIndex = 1; colourIndex <= MAX_COLORPAIR_NAME_CHARS; colourIndex++)
    {
        printColourCodeReference_Table(colourIndex);
    }
 
    return 0;
}
