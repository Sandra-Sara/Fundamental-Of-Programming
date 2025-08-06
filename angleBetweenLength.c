#include <stdio.h>
#include <math.h>
#define P 3.141592653589
int main() {
    double a, b, c, A, B, C;
    scanf("%lf %lf %lf", &a, &b, &c);
    C = ( acos( ( (a*a) + (b*b) - (c*c) ) / (2*a*b) ) ) * 180 / P;
    A = ( acos( ( (b*b) + (c*c) - (a*a) ) / (2*b*c) ) ) * 180 / P;
    B = ( acos( ( (c*c) + (a*a) - (b*b) ) / (2*c*a) ) ) * 180 / P;
    printf("%lf %lf %lf", A, B, C);
    return 0;
}
