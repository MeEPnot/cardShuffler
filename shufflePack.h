#ifndef SHUFFLEPACK_H_INCLUDED
#define SHUFFLEPACK_H_INCLUDED

#include "minunileLuiPaul.h"
#include <iostream>
#include <time.h>
#include <cstdlib>

template <class T>

class pack{
private:
    int size;
    T *internalPack;
    int curr;

public:
    pack(T *singlePack, int packSize, int packNumber){
        size = 0;
        internalPack = new T[packSize * packNumber];
        for(int i=0; i<packSize; i++){
            for(int j=0; j<packNumber; j++){
                internalPack[size++]=singlePack[i];
            }
        }
    }

    void shuffle(int numberofShuffles)
    {
        curr=0;
        srand (time(NULL));

        for(int j=1;j<=numberofShuffles;j++)
            for(int i=size-1;i>0;i--)
            {
                int n=rand() % size;
                swap(internalPack[n], internalPack[i]);
            }
    }

    void print()
    {
        for(int i=0; i<size; i++)
            std::cout<<internalPack[i]<<" ";
    }

};

#endif // SHUFFLEPACK_H_INCLUDED
