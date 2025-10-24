#include <stdio.h>

int dataA = 100; // global variable

void showData() {
    int dataB = 200; // local variable
    printf("Data A: %d\n", dataA); // Accessing global variable
    printf("Data B: %d\n", dataB); 
    // printf("DataC = %d\n", dataC); // error: undeclared identifier
}


int main() {
    int dataC = 300; //Local vvariable ใช้ได้เฉพาะภายใน code block {}
    printf("DataA = %d\n", dataA); 
    printf("DataA = %d\n", dataC);
    return 0;
}