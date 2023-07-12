int ft_putnbr (int nb)
{
    char temp;
    if (nb < 0)
    {
        nb *= -nb;
        write(1, "-", 1);
    }
    if (nb > 9)
    {
        ft_putnbr(nb / 10);
    }
    temp = nb % 10 + '0';
    write (1, &temp, 1);
}

int main()
{
    ft_putnbr(5);
    ft_putnbr(450);
    ft_putnbr(-23);
}
