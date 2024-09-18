#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int argc, char **argv, char **envp)
{
	char	buf[100] = {0};
	char	*s1 = "Good job.\n";
	char	*s2 = "Nope.\n";

	printf("Please enter key: ");
	scanf("%s", buf);
	if (strcmp(buf, argv[1]) == 0)
	{
		printf("%s", s1);
		return (0);
	}
	printf("%s", s2);
	return EXIT_SUCCESS;
}
