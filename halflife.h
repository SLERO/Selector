#ifndef HALFLIFE_H_INCLUDED
#define HALFLIFE_H_INCLUDED
#include "head_crab.h"

//#define GUTENBERG(X) printf("%d ", apocalipse[X])

#define GUTENBERG_2(...) printf(__VA_ARGS__)

#define PROBEL_MAKER printf("\n")
#define GENERATOR(X) (((X) + rand()) % X)

void not_mathes   ( int *, int, int);                 //  suppression of matches
void investigator (int *, int);                       //  ordering the selected
void exgibiton    (const int *, int);                 //  demonstration
int calc           (int *, int, int);




#endif // HALFLIFE_H_INCLUDED
