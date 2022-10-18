/*
    Requirements
    ----------------------------------------------------

    We need to get some practice writing functions

        - Better organized code
        - Avoid duplication

    For this challenge, you are to write three
    functions in a single program

    Write a function which finds the greatest common
    divisor of two non-negative integer values and
    to return the result

        - gcd (greatest common divisor) takes two
          ints as parameters

    Write a function to calculate the absolute
    value of a number

        - Should take as a parameter a float and
          return a float
        - Test this function with ints and floats

    Write a function to compute the square root of
    a number

        - If a negative argument is passed then a
          message is displayed and a -1.0 should
          be returned
        - Should use the absoluteValue function
          as implemented in the above step
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// function prototypes
int gcd(int, int);
double absolute(double);
double squareRoot(double);

int main() {

    int num1 = 0;
    int num2 = 0;
    double result = 0;

    printf("Enter two integers to the find the greatest common divisor: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter a number to find the square root and absolute value: ");
    scanf("%lf", &result);

    int gcdResult = gcd(num1, num2);
    printf("gcd is %d\n", gcdResult);

    double squareNum = squareRoot(result);
    printf("square root is %lf\n", squareNum);

    double absoluteNum = absolute(result);
    printf("absolute is %.2lf\n", absoluteNum);

    return 0;
}

int gcd(int x, int y) {

    int result = ((x < y) ? x : y);
    while (result > 0) {
        if (x % result == 0 && y % result == 0)
            break;
        result--;
    }

    return result;
}

double absolute(double x) {

    double num;

    if (x > 0)
        num = x;
    else
        num = -(x);

    return num;
}

double squareRoot(double x) {

    double root = x;
    double precision = pow(10, -10);

    if ((x < 0) && (root < 0)) {
        x = -(x);
        root = -(root);
        while (absolute(x - root * root) > precision)
            root = (root + x / root) / 2;
    } else {
        while (absolute(x - root * root) > precision)
            root = (root + x / root) / 2;
    }

    return root;
}
