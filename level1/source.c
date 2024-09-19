#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	buf[20] = {0};
	char	*s1 = "Good job.\n";
	char	*s2 = "Nope.\n";
	char	*password = "__stack_check";

	printf("Please enter key: ");
	scanf("%19s", buf);
	if (strcmp(buf, password) == 0)
	{
		printf("%s", s1);
		return (0);
	}
	printf("%s", s2);
	return (0);
}
