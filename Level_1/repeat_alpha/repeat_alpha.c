#include <unistd.h>

int main(int ac, char **av)
{
    int j ,i = 0;
    while(ac == 2 && av[1][i])
    {
        j = 1;
        if(av[1][i] >= 'A' && av[1][i] <= 'Z')
            j = av[1][i] - 'A' + 1;
        else if(av[1][i] >= 'a' && av[1][i] <= 'z')
            j = av[1][i] - 'a' + 1;
        while(j >= 1)
        {
            write(1, &av[1][i], 1);
            j--;
        }
        i++;
    }
    write(1, "\n", 1);
}