#include <criterion/criterion.h>
#include <stdio.h>

char *encrypt_this(const char *str);
static void do_test(const char *str, const char *expected);
static void complete_test();

Test(the_multiply_function, should_pass_all_the_tests_provided)
{
    do_test("", "");
    do_test("A", "65");
    do_test("Ab", "65b");
    do_test("Abcd", "65dcb");
    do_test("  Abcd   Abcd", "65dcb 65dcb");
    do_test("Abcd Aahhhhhhhhhhhhhhhhz", "65dcb 65zhhhhhhhhhhhhhhhha");
    do_test(" Hello world ", "72olle 119drlo");
    complete_test();
}
static void do_test(const char *str, const char *expected)
{
    char *actual = encrypt_this(str);
    if ( !actual )
        cr_assert(false, "Received NULL ptr\n");
    if ( strcmp(actual, expected) != 0 )
        cr_assert(false, "Expected \"%s\"\nReceived \"%s\"\n", expected, actual);
    free(actual);
}
static void complete_test()
{
    fflush(stdout);
    cr_assert(true);
}