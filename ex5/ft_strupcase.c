#include <unistd.h>

char *ft_strupcase(char *str)
{
    int     i;
    int     x;
    char*    lol;

    i = 0;
    lol = str;

    while (str[i])
    {
        x = (int)str[i];
        if ((x >= 97) && (x <= 122))
        {
            str[i] = ((char)(x - 32));
        }

        i++;
    }
    return lol;
}