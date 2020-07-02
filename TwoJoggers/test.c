#include <criterion/criterion.h>

typedef struct Laps_Pairing {
    int bob;
    int charles;
} laps;

laps nbr_of_laps(int x, int y);
void tester(int x, int y, laps expected);

Test(Example_Cases, should_pass_all_the_tests_provided)
{
  { int x = 5; int y = 3; laps expected = {3, 5}; tester(x, y, expected); }
  { int x = 4; int y = 6; laps expected = {3, 2}; tester(x, y, expected); }
  { int x = 5; int y = 5; laps expected = {1, 1}; tester(x, y, expected); }
}