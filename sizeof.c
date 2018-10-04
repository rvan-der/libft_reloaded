#include <stdio.h>
#include <stdlib.h>
/*#include <inttypes.h>*/
#include <errno.h>
#include <string.h>

int		main(void)
{
	//char		*str = "0Xz42";
	//intmax_t	nb;
	//char		*endp;

	// errno = 0;
	// nb = strtoimax(str, &endp, 0);
	// if (errno)
		// printf("%s\n", strerror(errno));
	// printf("strtoimax b0 \"%s\": %jd\nendp: %d \"%c\"\n", str, nb, (int)(endp - str), *endp);
	printf("intmax_min: %lld\n", INTMAX_MIN);
	return (0);
}