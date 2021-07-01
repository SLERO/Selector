/* 16.5_Selektor.c -- The program selects 20 random values from an integer array, shows them and sums them up  */
#include "halflife.h"
#include "head_crab.h"

int full = 0;                                          // variable visible to all translation units

inline static void starter(int massiv[], int biglarge)  // inline function
{
   for (int i = 0; i < FOBOS; i++)
    {
        massiv[i] = i + 101;
    }
}

int main (void)
{
    int warhammer[FOBOS];

    starter(warhammer, FOBOS);
    overlord(warhammer,FOBOS,DEYMOS);

    return 0;
}


