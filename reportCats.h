///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08d_animalfarm1_to_clion - EE 205 - Spr 2022
///
/// @file reportCats.h
/// @version 1.0
///
/// @author Baishen Wang <baishen@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

extern char* colorCollar( const int color );

extern char* genderOfCat( const int gender );

extern void printCat( const int index );

extern void printAllCats();

extern int findCats( char nameToFind[] );

