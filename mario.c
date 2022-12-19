#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height, n, space, colum;
    do
    {
        height = get_int("height: ");
    } while (height < 1 || height > 8);

    for (int n = 0; n < height; n++)
    {
        for (int colum = 0; colum < height - n - 1; colum++)
        {
            printf(" ");
        }
        for (int space = 0; space <= n; space++)
        {
            printf("#");
        }
        printf("\n");
    }
}