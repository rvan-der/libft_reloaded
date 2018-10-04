#include "libft.h"
#include <stdio.h>
#include <inttypes.h>


int			main(int argc, char **argv)
{
	char	*str;
	char	*endp;
	int		base;

	if (argc < 3 || argc > 4)
	{
		printf("Wrong number of arguments.\nusage:\ntest_strtol \"str\" base [-n]");
		return (-1);
	}
	str = argv[1];
	base = atoi(argv[2]);
	if (argc == 4)
	{
		write(1,"plop1\n",6);
		// errno = 0;
		// printf("system output:\n%jd\nerror: %s\nendptr: NULL\n",\
		// 		strtol(NULL, NULL, base), (errno ? strerror(errno) : "none"));
		// write(1,"test1\n",6);
		errno = 0;
		printf("my output:\n%jd\nerror: %s\nendptr: NULL\n\n\n",\
				ft_strtol(NULL, NULL, base), (errno ? strerror(errno) : "none"));
		write(1,"test2\n",6);
	}
	else
	{
		write(1,"plop2\n",6);
		// errno = 0;
		// printf("system output:\n%jd\nerror: %s\nendptr: str + %ld \"%c\"\n",\
		// 		strtol(NULL, &endp, base), (errno ? strerror(errno) : "none"), endp - str, *endp);
		// write(1,"test3\n",6);
		errno = 0;
		printf("my output:\n%jd\nerror: %s\nendptr: str + %ld \n\n\n",\
				ft_strtol(NULL, &endp, base), (errno ? strerror(errno) : "none"), endp - str);
		write(1,"test4\n",6);
	}
	return (0);
}