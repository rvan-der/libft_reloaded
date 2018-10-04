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
		printf("Wrong number of arguments.\nusage:\ntest_strtoimax \"str\" base [-n]");
		return (-1);
	}
	str = argv[1];
	base = atoi(argv[2]);
	if (argc == 4)
	{
		errno = 0;
		printf("my output:\n%jd\nerror: %s\nendptr: NULL\n\n\n",\
				ft_strtoimax(str, NULL, base), (errno ? strerror(errno) : "none"));
		errno = 0;
		printf("system output:\n%jd\nerror: %s\nendptr: NULL\n",\
				strtoimax(str, NULL, base), (errno ? strerror(errno) : "none"));
	}
	else
	{
		errno = 0;
		printf("my output:\n%jd\nerror: %s\nendptr: str + %ld \"%c\"\n\n\n",\
				ft_strtoimax(str, &endp, base), (errno ? strerror(errno) : "none"), endp - str, *endp);
		errno = 0;
		printf("system output:\n%jd\nerror: %s\nendptr: str + %ld \"%c\"\n",\
				strtoimax(str, &endp, base), (errno ? strerror(errno) : "none"), endp - str, *endp);
	}
	return (0);
}