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

 /*------ module includes -------*/
#include "TelecomColourCode_Main.h"

void testNumberToPair(int pairNumber, enum MajorColor_e expectedMajor, enum MinorColor_e expectedMinor);
ColorPair GetColorFromPairNumber(int pairNumber);
void ColorPairToString1(const ColorPair* colorPair, char* buffer);