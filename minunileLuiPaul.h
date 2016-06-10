#ifndef MINUNILELUIPAUL_H_INCLUDED
#define MINUNILELUIPAUL_H_INCLUDED

#include <time.h>
#include <cstdlib>

template <class T>

/**
    Simple same data type swap
**/

void swap(T &first, T &second)
{
    T auxiliary;

    auxiliary = first;
    first = second;
    second = auxiliary;
}

/**
Random between ranges
**/

int randRange(int beginR, int endR)
{
    srand (time(NULL));

    int x=rand();

    while(x<beginR || x>endR)
    {
        x=rand();
    }

    return x;
}

#endif // MINUNILELUIPAUL_H_INCLUDED
