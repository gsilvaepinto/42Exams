#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int i = 0;
        int j;

        while (argv[1][i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                j = 0;

                while (j <= argv[1][i] - 65)
                {
                    write(1, &argv[1][i], 1);
                    j++;
                }
            }
            else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                j = 0;

                while (j <= argv[1][i] - 97)
                {
                    write(1, &argv[1][i], 1);
                    j++;
                }
            }
            else
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}