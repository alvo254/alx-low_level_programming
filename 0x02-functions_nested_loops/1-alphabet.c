#include "main.h"
#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
    char ch;
    ch = 'a';
    while (ch <= 'z')
    {
        _putchar(ch);
        ch++;
    }
    _putchar('\n');
}

int main(void)
{
    print_alphabet();
    return (0);
}
