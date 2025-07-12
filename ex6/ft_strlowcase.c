#include <unistd.h>

char *ft_strlowcase(char *str)
{
    int     i;
    int     x;
    char*    lol;

    i = 0;
    lol = str;

    while (str[i])
    {
        x = (int)str[i];
        if ((x >= 65) && (x <= 90))
        {
            str[i] = ((char)(x + 32));
        }

        i++;
    }
    return lol;
}