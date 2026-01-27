#include <unistd.h>

void printnum(int nb)
{
    char digits[10];
    int i = 0;

    while (nb > 0)
    {
        digits[i++] = (nb % 10) + '0';
        nb /= 10;
    }
    while (--i >= 0)
        write(1, &digits[i], 1);
}

int main()
{
    int i = 0;

    while (i <= 100)
    {
        if (i % 5 == 0 && i % 3 == 0)
            write(1, "fizzbuzz\n", 9);
        else if (i % 5 == 0)
            write(1, "buzz\n", 5);
        else if (i % 3 == 0)
            write(1, "fizz\n", 5);
        else
        {
            printnum(i);
            write(1, "\n", 1);
        }
        i++;
    }
}