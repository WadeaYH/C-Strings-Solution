#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int ft_str_is_printable(char *str)
{
    int     i;
    int     x;
    int    flag;

    i = 0;
    flag = 0;
    while (str[i])
    {
        x = (int)str[i];
        if ((x < 32) || (x > 126))
        {
            return (0);
            flag = 1;
        }
        i++;
    }
    if(flag != 1)
        return (1);
}



void ft_putstr_non_printable(char *str)
{
    int i = 0;
    int c;
    int high;
    int low;
    char *hex = "0123456789abcdef";

    while (str[i])
    {
        c = (int)str[i];
        if (c >= 32 && c <= 126)
            ft_putchar(str[i]);
        else
        {
            ft_putchar('\\');
            high = c / 16;
            low = c % 16;
            ft_putchar(hex[high]);
            ft_putchar(hex[low]);
        }
        i++;
    }
}