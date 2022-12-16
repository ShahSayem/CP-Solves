#include <stdio.h>

int main()
{
    int n;  //declare an integer variable n
    scanf("%d", &n); //INPUT

    int sum = 0;
    for(int i = 1; i <= n; i++){ //(i=6) <= (n=5)
        sum = sum+i;
    }

    printf("%d", sum);
    return 0;
}
//1+2+3+4+5
//2
//3
//4
//5

