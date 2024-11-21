#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ok(void)
{
	(void)printf("Good job.\n");
}

void	no(void)
{
	(void)printf("Nope.\n");
	exit(1);
}

int	main(void)
{
	unsigned long	len;
	int				stay_in_loop;
	struct
	{
		char		c1;
		char		c2;
		char		c3;
		char		nullterm;
	}				chars;
	char			generated_string[9];
	char			input[24];
	int				ret;
	int				tri;
	int				check;
	int				atoited_chars;
	int				i;

	(void)printf("Please enter key: ");
	ret = scanf("%23s", input);
	if (ret != 1)
		no();
	else if (input[0] != '0')
		no();
	else if (input[1] != '0')
		no();
	(void)fflush(stdin);
	(void)memset(generated_string, 0, 9);
	generated_string[0] = 'd';
	i = 1;
	tri = 2;
	chars.nullterm = 0;
	while (1)
	{
		len = strlen(generated_string);
		check = tri;
		(void)check;
		stay_in_loop = 0;
		if (len < 8)
		{
			len = strlen(input);
			stay_in_loop = check < (int)len;
		}
		if (!stay_in_loop)
			break ;
		chars.c1 = input[tri];
		chars.c2 = input[tri + 1];
		chars.c3 = input[tri + 2];
		atoited_chars = atoi(&chars.c1);
		generated_string[i] = (char)atoited_chars;
		tri += 3;
		++i;
	}
	generated_string[i] = '\0';
	if (strcmp(generated_string, "delabere") == 0)
		ok();
	else
		no();
	return (0);
}
