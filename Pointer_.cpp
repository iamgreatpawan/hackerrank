/*
Input Format

Input will contain two integers, a and b, separated by a newline.

Output Format

You have to print the updated value of a  and b , on two different lines.


P.S.: Input/ouput will be automatically handled. You only have to complete the
void update(int *a,int *b) function.

Explanation
a' = a+b;
b' = |a-b|;
*/
#include <stdio.h>

void update(int *a,int *b) {
      int sum = *a + *b;
    int absDifference = *a - *b > 0 ? *a - *b : -(*a - *b);
    *a = sum;
    *b = absDifference;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
