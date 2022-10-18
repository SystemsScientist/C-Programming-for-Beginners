#include <stdio.h>
#include <stdlib.h>

void myFunction();  // function prototype

int myGlobal = 0;   // global variable

int main() {

    int myLocalMain = 0;    // local variable
    // can access myGlobal and myLocalMain

    return 0;
}

void myFunction() {

    int x;  // local variable
    // can access myGlobal and x, but cannot access myLocalMain
}
