/* 6.11 改良的氣泡排序
 * a) 每跑完一輪，最大的數就會到最後面，所以下一輪少比一次
 * b) 如果一整輪都沒有交換，代表已經排好了，直接結束
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main(void)
{
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
    int i, j, tmp;
    int swapped;

    printf("Data items in original order\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }
    printf("\n");

    for (i = 0; i < SIZE - 1; i++)
    {
        swapped = 0;

        for (j = 0; j < SIZE - 1 - i; j++) /* a) 每輪少比一次 */
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                swapped = 1;
            }
        }

        printf("Pass %d:", i + 1);
        for (j = 0; j < SIZE; j++)
        {
            printf("%4d", a[j]);
        }
        printf("\n");

        if (swapped == 0) /* b) 沒有交換就結束 */
        {
            break;
        }
    }

    printf("Data items in ascending order\n");
    for (i = 0; i < SIZE; i++)
    {
        printf("%4d", a[i]);
    }
    printf("\n");

    system("pause");
    return 0;
}
