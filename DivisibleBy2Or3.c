#include<stdio.h>

int main() {
    int n, c = 0;
    scanf("%d", &n);

    for(int i = 4; i <= n; i++) {
        if(i % 6 != 0) {
            if((i % 2 == 0) || (i % 3 == 0)) {
                c++;
            }
        }
    }
    printf("%d\n", c);
    return 0;
}
