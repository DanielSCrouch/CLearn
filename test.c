#include <criterion/criterion.h>

int *array_diff(const int *arr1, size_t n1, const int *arr2, size_t n2, size_t *z);
void tester(const int *arr1, size_t n1, const int *arr2, size_t n2, const int *expected, size_t e);

Test(Example_Tests, should_pass_all_the_tests_provided) {
  {
    const int arr1[2] = {1, 2};
    const int arr2[1] = {1};
    const int expected[1] = {2};    
    tester(arr1, 2, arr2, 1, expected, 1);
  }
  {
    const int arr1[3] = {1, 2, 2};
    const int arr2[1] = {1};
    const int expected[2] = {2, 2};    
    tester(arr1, 3, arr2, 1, expected, 2);
  }
  {
    const int arr1[3] = {1, 2, 2};
    const int arr2[1] = {2};
    const int expected[1] = {1};    
    tester(arr1, 3, arr2, 1, expected, 1);
  }
  {
    const int arr1[3] = {1, 2, 2};
    const int arr2[0] = {};
    const int expected[3] = {1, 2, 2};    
    tester(arr1, 3, arr2, 0, expected, 3);
  }
  {
    const int arr1[0] = {};
    const int arr2[2] = {1, 2};
    const int expected[0] = {};    
    tester(arr1, 0, arr2, 2, expected, 0);
  }
  {
    const int arr1[5] = {1, 2, 3, 4, 5};
    const int arr2[3] = {1, 3, 4};
    const int expected[2] = {2, 5};    
    tester(arr1, 5, arr2, 3, expected, 2);
  }

}

