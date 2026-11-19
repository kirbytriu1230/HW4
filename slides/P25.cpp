/* P25 call by reference (C 不支援，所以存成 .cpp) */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int addbyone(int &xref);

int main()
{
    int x = 100;
    int y = addbyone(x);
    printf("x=%d\n", x);

    system("pause");
    return 0;
}

int addbyone(int &xref)
{
    xref++;
    printf("xref=%d\n", xref);
    return xref;
}
