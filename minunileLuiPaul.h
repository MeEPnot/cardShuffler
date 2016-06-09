#ifndef MINUNILELUIPAUL_H_INCLUDED
#define MINUNILELUIPAUL_H_INCLUDED

template <class T>

/*
    Simple same data type swap
*/

void swap(T &first, T &second)
{
    T auxiliary;

    auxiliary = first;
    first = second;
    second = auxiliary;
}

#endif // MINUNILELUIPAUL_H_INCLUDED
