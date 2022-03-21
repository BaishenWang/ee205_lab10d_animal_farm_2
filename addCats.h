///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab08d_animalfarm1_to_clion - EE 205 - Spr 2022
///
/// @file addCats.h
/// @version 1.0
///
/// @author Baishen Wang <baishen@hawaii.edu>
/// @date   20_Mar_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

extern int addCat( char nameToAdd[],
                   enum Gender isGender,
                   enum Breed isBreed,
                   bool isFixedNew,
                   float weightNew,
                   enum Color collarColor1,
                   enum Color collarColor2,
                   unsigned long long license ) ;

