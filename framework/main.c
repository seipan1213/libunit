#include "framework.h"

int	a()
{
	if (ft_strlen("aa") == strlen("aa"))
		return (0);
	else
		return (-1);
}

int	main()
{
	t_unit_test *testlist;

	testlist = NULL;
	printf("*********************************\n");
	printf("** 42 - Unit Tests ****\n");
	printf("*********************************\n");
	puts("STRLEN:");
	load_test(&testlist, "Basic test", &a);
	load_test(&testlist, "Basic test", &a);
	load_test(&testlist, "Basic test", &a);
	load_test(&testlist, "Basic test", &a);
	load_test(&testlist, "Basic test", &a);
	load_test(&testlist, "Basic test", &a);
	return(launch_tests(&testlist));
}