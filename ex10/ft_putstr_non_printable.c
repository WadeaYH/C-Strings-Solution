#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putstr(char *str) {
    int i = 0;
    while (str[i])
        write(1, &str[i++], 1);
}

void ft_putnbr(int n) {
    if (n > 9)
        ft_putnbr(n / 10);
    ft_putchar(n % 10 + '0');
}

void ft_putarr(int *n, int size){
    int i = 0;
    while (i < size)
    {
        ft_putnbr(n[i]);
        i++;
        ft_putchar('\n');
    }
    
}



int main(void)
{
    ft_putstr("Not Solved Yet");
}