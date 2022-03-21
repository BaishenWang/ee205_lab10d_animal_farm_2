///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08d_animalfarm1_to_clion - EE 205 - Spr 2022
///
/// @file updateCats.h
/// @version 1.0
///
/// @author Baishen Wang <baishen@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

extern void updateCatName( const int index, char newName[] );

extern void fixCat( const int index );

extern void updateCatWeight( const int index, float newWeight );

extern void updateCatCollar1( const int index, enum Color collarColor1 );

extern void updateCatCollar2( const int index, enum Color collarColor2 );

extern void updateLicense( const int index, unsigned long long license );