#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void	no(void)
{
	puts("Nope.");
	exit(1);
}

void	ok(void)
{
	puts("Good job.");
	return ;
}

int	main(void)
{
	char	key[24];
	char	buf[9]; // local_21
	int	ret_scanf;
	int	sum2; // var_14h
	int	sum3; // var_10h
	int	atoi_ret;
	bool	bool_var;
	size_t	len;
	char	tmp; // local_3d
	char	tmp2; // local_3c
	char	tmp3; // local_3b
	char	tmp_str[4];

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
	sum2 = 2;
	sum3 = 1;
	while (true)
	{
		len = strlen(buf);
		bool_var = false;
		if (len < 8)
		{
			len = strlen(key);
			bool_var = sum2 < len;
		}
		if (!bool_var)
			break;
		tmp_str[0] = key[sum2];
		tmp_str[1] = key[sum2 + 1];
		tmp_str[2] = key[sum2 + 2];
		tmp_str[3] = '\0';
		atoi_ret = atoi(tmp_str);
		buf[sum3] = (char)atoi_ret;
		sum2 = sum2 + 3;
		sum3 = sum3 + 1;
	}
	buf[sum3] = '\0';
	if (strcmp(buf, "delabere") == 0)
		ok();
	else
		no();
	return (0);
}
