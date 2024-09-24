#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void	___syscall_malloc(void)
{
	puts("Nope.");
	exit(1);
}

void	____syscall_malloc(void)
{
	puts("Good job.");
	return ;
}


int	main(void)
{
	char	buf[24];
	char	s1[9];
	char	tmp[3];
	int	ret_scanf;
	int	j;
	int	tmp_j;
	int	k;
	int	ret_len;
	int	ret_strcmp;
	int	ret_atoi;
	bool	bool_var;

	printf("Please enter key: ");
	ret_scanf = scanf("%23s", buf);
	if (ret_scanf != 1)
		___syscall_malloc();
	if (buf[1] != '2')
		___syscall_malloc();
	if (buf[0] != '4')
		___syscall_malloc();
	fflush(stdin);
	memset(s1, 0, 9);
	s1[0] = '*';
	j = 2;
	k = 1;
	while (true)
	{
		ret_len = strlen(s1);
		tmp_j = j;
		bool_var = false;
		if (ret_len < 8)
		{
			ret_len = strlen(buf);
			bool_var = tmp_j < ret_len;
		}
		if (!bool_var)
			break ;
		tmp[0] = buf[j];
		tmp[1] = buf[j + 1];
		tmp[2] = buf[j + 2];
		ret_atoi = atoi(tmp);
		s1[k] = (char)ret_atoi;
		j += 3;
		k++;
	}
	s1[k] = '\0';
	ret_strcmp = strcmp(s1, "********");
	if (ret_strcmp == -2)
		___syscall_malloc();
	else if (ret_strcmp == -1)
		___syscall_malloc();
	else if (ret_strcmp == 0)
		____syscall_malloc();
	else if (ret_strcmp == 1)
		___syscall_malloc();
	else if (ret_strcmp == 2)
		___syscall_malloc();
	else if (ret_strcmp == 3)
		___syscall_malloc();
	else if (ret_strcmp == 4)
		___syscall_malloc();
	else if (ret_strcmp == 5)
		___syscall_malloc();
	else if (ret_strcmp == 0x73)
		___syscall_malloc();
	else
		___syscall_malloc();
	return (0);
}
