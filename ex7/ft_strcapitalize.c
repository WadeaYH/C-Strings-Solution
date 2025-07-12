#include <unistd.h>

int ft_str_is_alpha(char str)
{
    int x = (int)str;
    if ((x >= 65 && x <= 90) || (x >= 97 && x <= 122))
        return 1;
    return 0;
}

char *ft_strcapitalize(char *str)
{
    int     x;
    int     i;

    i = 0;
    while (str[i])
    {
        x = (int)str[i];
        if (ft_str_is_alpha(str[i]))
        {
            if (i == 0 || !ft_str_is_alpha(str[i - 1]))
                if (x >= 'a' && x <= 'z')
                    str[i] = ((char)(x - 32));
            else
                if (x >= 'A' && x <= 'Z')
                    str[i] = ((char)(x + 32));
        }
        i++;
    }
    return str;
}