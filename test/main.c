#include <stdio.h>

#include <libcapsicum.h>

#include "tests.h"

struct test all_tests[] = {
	TEST_INIT(fdlist),
	TEST_INIT(startfd),
};
int test_count = sizeof(all_tests) / sizeof(struct test);
	
int
main(int argc, char *argv[])
{
#ifdef HAVE_LD_INSANDBOX
	if (ld_insandbox())
		return SANDBOX_MAGIC;
#endif

	return (run_all_tests(test_count, all_tests, argc, argv) != PASSED);
}
