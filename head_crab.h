#ifndef HEAD_CRAB_H_INCLUDED
#define HEAD_CRAB_H_INCLUDED

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>


#define FOBOS 100
#define DEYMOS 20

extern int full;

struct groundcontrol {
      int index_collection[FOBOS];
      int value_collection[DEYMOS];
};

typedef struct groundcontrol dangerzone;

void overlord (const int *, int , int);           //  fetching and captured values


#endif // HEAD_CRAB_H_INCLUDED
