#include <criterion/criterion.h>

char *work_on_strings(const char *, const char *);

Test(Sample_Tests, Tests) {
  char *cases[] = {
    "abc",         "cde",           "abCCde",
    "abcdeFgtrzw", "defgGgfhjkwqe", "abcDeFGtrzWDEFGgGFhjkWqE",
    "abcdeFg",     "defgG",         "abcDEfgDEFGg",
    "abab",        "bababa",        "ABABbababa"
  };
  for (int i = 0; i < 12; i += 3) {
    char *s = work_on_strings(cases[i], cases[i + 1]);
    cr_assert_str_eq(s, cases[i + 2]);
    free(s);
  }
}