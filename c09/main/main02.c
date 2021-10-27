#include <stdio.h>

char	**ft_split(char *str, char *charset);

int	main(void)
{
	char a[] = "aadvaaaadvaaaadaaadvaaa";
	char s[] = "dv";
	char	**split = ft_split(a, s);
	int i = 0;
	while (split[i])
	{
		printf("%s\n", split[i]);
		i++;
	}
}
