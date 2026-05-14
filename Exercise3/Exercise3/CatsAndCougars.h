#ifndef CATS_AND_COUGARS_H
#define CATS_AND_COUGARS_H

#include "StandardIncludes.h"

class CatsAndCougars
{
private:
    int cats;
    int cougars;
    int totalCats;
    int totalCougars;

    void reset();

public:
    CatsAndCougars();
    int getCats();
    int getCougars();
    int getTotalCats();
    int getTotalCougars();
    void count(string lword, string rword);
};

#endif