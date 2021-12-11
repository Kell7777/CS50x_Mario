#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get positive integer from user
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Print new line as row
    for (int row = 0; row < height; row++)
    {
    // To print space
        for (int space = height - row - 1; space > 0; space--)
        {
            printf(" ");
        }
    // Print hashes(#)
        for (int hash = 0; hash < row + 1; hash++)
        {
            printf("#");
        }
        printf("  ");
        for (int right_hash = 0; right_hash < row + 1; right_hash++)
        {
            printf("#");
        }
        printf("\n");
    }
}
