#include <stdio.h>

main()
{
	int N;
	int i,j;
	N=10;
	i=0;
	
	do
	{
		j=i;
		do
		{
			printf("X");
			j++;
		}
		while(j<=N);
		printf("\n");
		i++;
	}
	while(i<=N);
}
