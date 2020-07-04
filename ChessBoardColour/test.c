#include <criterion/criterion.h>

void test_chess_board_cell_color(const char *cell1, const char* cell2, bool expected);

Test(the_multiply_function, should_pass_some_example_tests)
{
    test_chess_board_cell_color("A1", "C3", true);
    test_chess_board_cell_color("A1", "H3", false);
    test_chess_board_cell_color("A1", "A2", false);
}