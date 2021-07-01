#include "head_crab.h"
#include "halflife.h"
//#define DIAGNOST

void overlord (const int warhammer[], int biglarge, int smallarge)
{
    int y;
    int hunter = 0;
    dangerzone hellfire;                                              // typedef structure alias

    srand(time(NULL));

    not_mathes(hellfire.index_collection, smallarge, biglarge);

    #ifdef DIAGNOST                                                   // control ordering work
    exgibiton(hellfire.index_collection,smallarge);
    investigator(hellfire.index_collection, smallarge);
    printf("\nAfter: \n");
    exgibiton(hellfire.index_collection,smallarge);
    printf("\nResult: \n");
    #endif // DIAGNOST

    investigator(hellfire.index_collection, smallarge);                // ordering index for up

      for (y = 0; y < biglarge; y++)                                  // copy selected index
      {
          if (y == hellfire.index_collection[hunter])
          {
              hellfire.value_collection[hunter] = warhammer[y];
              hunter++;
          }

      }

      printf("Summa value: %d \n", calc(hellfire.value_collection, DEYMOS, full));
      exgibiton(hellfire.value_collection, smallarge);
}
