#include <iostream>
#include "shufflePack.h"

using namespace std;

int lista[]={1,2,3,4,5,6,7,8,9,10};

int main()
{
    pack <int> pachet = pack<int>(lista,10,5);

    pachet.shuffle(5);

    pachet.print();

    return 0;
}
