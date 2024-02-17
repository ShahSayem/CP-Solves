#include <stdio.h>

int main()
{
    int n, i, count = 0;
    int a[3];

    scanf("%d", &n);

    while(n--) {

        for(i = 0; i < 3; i++) {
            scanf(" %d", &a[i]);
        }
        if(a[0] + a[1] + a[2] >= 2) {
            count++;
        }
    }
        printf("%d", count);
        return 0;
}