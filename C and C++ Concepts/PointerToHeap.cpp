#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int *p; // Address Variable --->DECLARATION

    // USING C

    p = (int *)malloc(4 * sizeof(int));
    p[0] = 1, p[1] = 1, p[2] = 2, p[3] = 3;
    for (int i = 0; i < 4; i++)
    {
        cout << p[i] << endl;
    }

    free(p);

    // USING C++

    p = new int[4];
    p[0] = 3, p[1] = 2, p[2] = 1, p[3] = 0;
    for (int i = 0; i < 4; i++)
    {
        cout << p[i] << endl;
    }

    delete[] p;

    return 0;
}