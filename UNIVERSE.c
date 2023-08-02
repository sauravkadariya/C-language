#include <stdio.h>
int main()
{

    char a[] = {'U', 'N', 'I', 'V', 'E', 'R', 'S', 'E'};
    for (int i = 0; i <= 7; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            printf("%c", a[j]);
        }
        printf("\n");
    }

    return 0;
}