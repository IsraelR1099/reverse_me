#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void	no(void)
{
	puts("Nope.");
	exit(1);
}

int	main(void)
{
	char	key[24];
	char	buf[9]; // local_21
	int	ret_scanf;
//	int	sum; // var_36h
	int	sum2; // var_14h
	int	sum3; // var_10h
	//int	u_var1;
	int	atoi_ret;
	bool	bool_var;
	size_t	len;
	char	tmp; // local_3d
	char	tmp2; // local_3c
	char	tmp3; // local_3b

	printf("Please enter key: ");
	ret_scanf = scanf("%23s", key);
	if (ret_scanf != 1)
		no();
	if (key[1] != '0')
		no();
	if (key[0] != '0')
		no();
	fflush(stdin);
	memset(buf, 0, 9);
	buf[0] = 'd';
//	sum = 0;
	sum2 = 2;
	sum3 = 1;
	while (true)
	{
		len = strlen(buf);
		printf("len: %zu\n", len);
		//u_var1 = sum2;
		bool_var = false;
		if (len < 8)
		{
			len = strlen(key);
			printf("len key: %zu\n", len);
			printf("sum2: %d\n", sum2);
			bool_var = sum2 < len;
		}
		if (!bool_var)
			break;
		tmp = key[sum2];
		printf("tmp: %c\n", tmp);
		tmp2 = key[sum2 + 1];
		printf("tmp2: %c\n", tmp2);
		tmp3 = key[sum2 + 2];
		printf("tmp3: %c\n", tmp3);
		atoi_ret = atoi(&tmp);
		printf("atoi_ret: |%d|\n", atoi_ret);
		printf("atoi_ret: |%c|\n", (char)atoi_ret);
		buf[sum3] = (char)atoi_ret;
		sum2 = sum2 + 3;
		sum3 = sum3 + 1;
	}
	printf("out of loop buf: %s\n", buf);
	return (0);
}
