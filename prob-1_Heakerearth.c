#include <stdio.h>

int main()
{
	int i, num;
	long long  sum = 0;
	long long  array[100];

    scanf("%d", &num);
    printf("\n");

	for(i = 0; i < num; i++) {
		scanf("%lld", &array[i]);
	}              			
	for(i = 0; i < num; i++) {
		sum = sum + array[i]; 
	}
	printf("%lld\n", sum);

	return 0;      
}