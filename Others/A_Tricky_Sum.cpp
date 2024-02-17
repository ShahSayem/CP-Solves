#include <stdio.h>

int main()
{
    int tc = 1;
    scanf("%d", &tc);
    while (tc--){
        long long n;
        scanf("%lld", &n);

        long long sum = 0;
        sum = (n*(n+1)) / 2;

        for (int i = 1; i <= n; i = i*2){
            sum = sum - (i*2);
        }
        
        printf("%lld\n", sum);
    }

    return 0;
}
