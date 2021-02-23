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

 /*------ module includes -------*/
#include "TelecomColourCode_Main.h"

/*---------------------------------------------------------------------------*/
/*     FUNCTION: TCC_printColourCodeReference_Table
 */
/*!    \brief   Function to derive the Pair code from the major and Minor colours
 *
 *
 *     \param    colourIndex_i -> This varies from 1-25 for all the combinations
 *     \returns  void
 *
 *//*------------------------------------------------------------------------*/
void TCC_printColourCodeReference_Table(int colourIndex_i)
{
    ColorPair_s colorPair = TCC_GetColorFromPairNumber(colourIndex_i);
    char colorPairNames[MAX_COLORPAIR];
    TCC_ColorPairToString(&colorPair, colorPairNames);
    printf("Pair %d\t\t%s\n", colourIndex_i, colorPairNames);
}
