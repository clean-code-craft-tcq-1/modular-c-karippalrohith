/* ******************************************************************************
 ***     \file        TelecomColourCode_Main.h
 ***     \ingroup     Session1-TCQ
 ***     \author      Rohith K N
 ***
 ***     \brief       Header file for the module
 ***
 ***     \par         File_description
 ***                  This file have the declarations of the variables and methods of the module
 ***
 *****************************************************************************/
#ifndef TELECOM_COLOR_CODE_MAIN_H_
#define TELECOM_COLOR_CODE_MAIN_H_
/*=============================================================================
 =======                            INCLUDES                             =======
 ============================================================================*/
 /*------ standard includes -------*/
#include <stdio.h>

#define MAX_COLORPAIR 				25		/*maximum number of colour pairs possible*/

enum MajorColor_e{
	WHITE, 									/*0*/
	RED, 									/*1*/
	BLACK, 									/*2*/
	YELLOW,             					/*3*/
	VIOLET              					/*4*/
};

enum MinorColor_e{
	BLUE, 									/*0*/
	ORANGE,             					/*1*/
	GREEN,              					/*2*/
	BROWN,              					/*3*/
	SLATE               					/*4*/
};

typedef struct {
    enum MajorColor_e majorColor;
    enum MinorColor_e minorColor;
} ColorPair_s;

extern const char* MajorColorNames_a[];

extern const char* MinorColorNames_a[];

extern int numberOfMajorColors_i;
extern int numberOfMinorColors_i;

void TCC_testColours_AgainstPairNumber(enum MajorColor_e major, enum MinorColor_e minor, int expectedPairNumber);
void TCC_testPairNumber_AgaintColours(int pairNumber, enum MajorColor_e expectedMajor, enum MinorColor_e expectedMinor);
ColorPair_s TCC_GetColorFromPairNumber(int pairNumber);
void TCC_ColorPairToString(const ColorPair_s* colorPair, char* buffer);
int TCC_GetPairNumberFromColor(const ColorPair_s* colorPair);
void TCC_printColourCodeReference_Table(int colourIndex_i);
#endif /*TELECOM_COLOR_CODE_MAIN_H_*/
