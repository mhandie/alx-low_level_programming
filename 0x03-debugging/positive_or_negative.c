#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// function prototype
int positive_or_negative(int num);

int main() {
int result;

// test case 1: input is 0
result = positive_or_negative(0);
if (result == 0) {
printf("Test case 1 passed: 0 is neither positive nor negative.\n");
} else {
printf("Test case 1 failed: expected result to be 0 but got %d.\n", result);
}
return 0;
}
// function definition
int positive_or_negative(int num) {
if (num > 0) {
return 1;
} else if (num < 0) {
return -1;
} else {
return 0;
}
}
