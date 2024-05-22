#include <unistd.h>
#include <string.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 2)
	{
		j = 0;
		while(av[1][i])
		{
			write(1, &av[1][i], 1);
			j++;
			if (j > 79)
			{
				write(1, "\n", 1);
				j = 0;
			}
			i++;
		}
	}
	return (0);
}
