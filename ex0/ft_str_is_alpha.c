#include <unistd.h>

int ft_str_is_alpha(char *str)
{
    int     i;
    int     x;
    int    flag;

    i = 0;
    flag = 0;
    while (str[i])
    {
        x = (int)str[i];
        if ((x < 65) || (x > 122) || (x > 90 && x < 97))
        {
            return (0);
            flag = 1;
        }
        i++;
    }
    if(flag != 1)
        return (1);
}