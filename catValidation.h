///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08d_animalfarm1_to_clion - EE 205 - Spr 2022
///
/// @file catValidation.h
/// @version 1.0
///
/// @author Baishen Wang <baishen@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

extern int catNameExists( const int index, char nameToCheckAgainst[] ) ;

extern int checkForEmptyName( const int index ) ;

extern bool isValidIndex( const int index ) ;

extern bool isValidWeight( const float checkWeight ) ;

extern bool isValidName(char nameToCheck[] ) ;