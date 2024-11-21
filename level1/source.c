#include <stdio.h>
#include <string.h>

int	main(void)
{
	char		input[100];
	struct
	{
		char	a;
		char	b;
		char	c;
		char	d;
		char	e;
		char	f;
		char	g;
		char	h;
		char	i;
		char	j;
		char	k;
		char	l;
		char	m;
		char	n;
	}			key = {
		'_',
		'_',
		's',
		't',
		'a',
		'c',
		'k',
		'_',
		'c',
		'h',
		'e',
		'c',
		'k',
		'\0'
	};

	(void)printf("Please enter key: ");
	(void)scanf("%s", input);
	if (strcmp(input, &key.a) == 0)
		(void)printf("Good job.\n");
	else
		(void)printf("Nope.\n");
	return (0);
}
