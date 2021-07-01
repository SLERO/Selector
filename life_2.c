#include "halflife.h"
#include "head_crab.h"



void not_mathes(int massive[], int smallarge, int biglarge)
{
    int alf, gam;
    bool sauron = false;

    srand(time(NULL));

    for (alf = 0; alf < smallarge; alf++)
    {

        massive[alf] = GENERATOR(biglarge);           // makros random generator index
        if (alf > 0)                                  // last step one
        {
            for (gam = alf - 1; gam >= 0; gam--)      // reverse search  >= а не <= !!!!
            {
                if(massive[alf] == massive[gam])
                    {
                        sauron = true;
                        break;
                    }
            }

        }
        if (sauron)
        {
            sauron = false;
            alf--;
            continue;
        }
    }
}

void investigator (int sentinel [], int smallarge)
{
     int post, x, y;

     for (x = 0; x < smallarge - 1; x++)
        for  (y = x + 1; y < smallarge; y++)
        {

              if (sentinel[x] > sentinel[y])
             {
                  post = sentinel[x];
                  sentinel[x] = sentinel[y];
                  sentinel[y] = post;
             }
        }
}

void exgibiton (const int apocalipse[], int smallarge)
{
    int f;

    for (f = 0; f < smallarge; f++)
    {
        if (f % 10 == 0)
            GUTENBERG_2("\n");   // makros alias printf
        GUTENBERG_2("%d ", apocalipse[f]);
        }
}

int calc(int massive[] ,int smallarge, int full)
{
    for(int i = 0; i < smallarge; i++)
        full += massive[i];

      return full;

}
