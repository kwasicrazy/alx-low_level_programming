#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number of times table to print.
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return; 

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            int result = i * j;

            if (j == 0)
                _putchar("%d", result); 
            else
                _putchar(" %d", result);

            if (j < n)
                _putchar(","); 
            else
                _putchar("\n"); 
        }
    }
}
