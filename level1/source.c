#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char	buf[100] = {0};
	char	*s1 = "Good job.\n";
	char	*s2 = "Nope.\n";
	char	*password = "__stack_check";

	printf("Please enter key: ");
	scanf("%s", buf);
	if (strcmp(buf, password) == 0)
	{
		printf("%s", s1);
		return (0);
	}
	printf("%s", s2);
	return EXIT_SUCCESS;
}
