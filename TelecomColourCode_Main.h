/* ******************************************************************************
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
#ifndef TELECOM_COLOR_CODE_MAIN_H_
#define TELECOM_COLOR_CODE_MAIN_H_
/*=============================================================================
 =======                            INCLUDES                             =======
 ============================================================================*/
 /*------ standard includes -------*/
#include <stdio.h>
#define MAX_COLORPAIR_NAME_CHARS 25
enum MajorColor_e{
	WHITE, 				/*0*/
	RED, 				/*1*/
	BLACK, 				/*2*/
	YELLOW,             		/*3*/
	VIOLET              		/*4*/
};

enum MinorColor_e{
	BLUE, 			/*0*/
	ORANGE,             	/*1*/
	GREEN,              	/*2*/
	BROWN,              	/*3*/
	SLATE               	/*4*/
};

typedef struct {
    enum MajorColor_e majorColor;
    enum MinorColor_e minorColor;
} ColorPair;

extern const char* MajorColorNames_a[];

extern const char* MinorColorNames_a[];

extern int numberOfMajorColors;
extern int numberOfMinorColors;

void testPairToNumber(enum MajorColor_e major, enum MinorColor_e minor, int expectedPairNumber);
void testNumberToPair(int pairNumber, enum MajorColor_e expectedMajor, enum MinorColor_e expectedMinor);

void testNumberToPair(int pairNumber, enum MajorColor_e expectedMajor, enum MinorColor_e expectedMinor);
ColorPair GetColorFromPairNumber(int pairNumber);
void ColorPairToString(const ColorPair* colorPair, char* buffer);

void testPairToNumber(enum MajorColor_e major, enum MinorColor_e minor, int expectedPairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);
void printColourCodeReference_Table(int colourIndex);
#endif /*TELECOM_COLOR_CODE_MAIN_H_*/
