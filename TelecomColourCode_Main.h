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
 
/*=============================================================================
 =======                            INCLUDES                             =======
 ============================================================================*/
 /*------ standard includes -------*/
#include <stdio.h>
const int MAX_COLORPAIR_NAME_CHARS = 16;
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

const char* MajorColorNames_a[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

const char* MinorColorNames_a[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMajorColors = sizeof(MajorColorNames_a) / sizeof(MajorColorNames_a[0]);
int numberOfMinorColors = sizeof(MinorColorNames_a) / sizeof(MinorColorNames_a[0]);
