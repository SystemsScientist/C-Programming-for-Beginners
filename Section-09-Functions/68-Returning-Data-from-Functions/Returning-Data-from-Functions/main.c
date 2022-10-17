#include <stdio.h>
#include <stdlib.h>

int multiplyTwoNumbers(int, int);   // function prototype

int main() {

    int result = 0;

    result = multiplyTwoNumbers(10, 20);
    printf("result is %d.\n", result);

    result = multiplyTwoNumbers(10, 10);
    printf("result is %d.\n", result);

    return 0;
}

int multiplyTwoNumbers(int x, int y) {

    int result = x * y;
    return result;
}
