int ft_atoi(char *str)
{
    int i;
    int n;
    int signe;

    i = 0;
    n = 0;
    signe = 1;
    while (str[i] && str[i] >= 9 && str[i] <= 13 || str[i] == 32)
    {
        i++;
    }
    while (str[i] && str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
        {
            signe *= -1;
        }
        i++;
    }
    while (str[i] && str[i] >= 48 && str[i] <= 57)
    {
        n = n * 10 + str[i] - '0';
        i++;
    }
    return (n * signe);   
}

#include <stdio.h>

int main()
{
    char str[] = "  ++-++++-+++++-1324ytrgr522";
    printf ("%d", ft_atoi(str));

