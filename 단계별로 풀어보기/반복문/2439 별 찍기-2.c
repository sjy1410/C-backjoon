#include <stdio.h>

main()
{
	int n;
	scanf("%d",&n); // 5
	
	for(int i=1;i<=n;i++){ //5줄 출력 
		for(int j=1;j<=n-i;j++){ // 4,3,2,1
			printf(" ");
		}
		for(int k=1;k<=i;k++){ // 1,2,3,4,5
			printf("*");
		}
		printf("\n");
	}

}
