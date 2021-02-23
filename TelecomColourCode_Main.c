/* ******************************************************************************
 ***
 ***     \file        TelecomColourCode_Main.c
 ***     \ingroup     Session1-TCQ
 ***     \author      Rohith K N
 ***
 ***     \brief       Main file to check different colour combinations
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

/*=============================================================================
 =======                VARIABLES & MESSAGES & RESSOURCEN                =======
 ==============================================================================*/
int numberOfMajorColors_i = sizeof(MajorColorNames_a) / sizeof(MajorColorNames_a[0]);
int numberOfMinorColors_i = sizeof(MinorColorNames_a) / sizeof(MinorColorNames_a[0]);

/*=============================================================================
 =======                              METHODS                            =======
 =============================================================================*/
 
/*---------------------------------------------------------------------------*/
/*     FUNCTION: main
 */
/*!    \brief   Function to test colour combinations from colour code and vice versa.
 *				It also prints the colour combination table 
 *
 *
 *     \param    none
 *     \returns  int
 *
 *//*------------------------------------------------------------------------*/
int main() {
    int colourIndex_i;
 
	//Test the colour pair code against the expected Major and Minor colour of the respective code
    TCC_testPairNumber_AgaintColours(4, WHITE, BROWN);
    TCC_testPairNumber_AgaintColours(5, WHITE, SLATE);

	//Test the Major and Minor colour to the respective colour code
    TCC_testColours_AgainstPairNumber(BLACK, ORANGE, 12);
    TCC_testColours_AgainstPairNumber(VIOLET, SLATE, 25);
    
    /*Print Colour Reference for all the 25 Pairs*/
    printf("Colour Code   Major Colour::Minor Colour\n");
    for(colourIndex_i = 1; colourIndex_i <= MAX_COLORPAIR; colourIndex_i++)
    {
        TCC_printColourCodeReference_Table(colourIndex_i);
    }
 
    return 0;
}
