#include <stdio.h>

main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){ //파일의 끝에 도달할 때까지 while문 실 행 
		printf("%d\n",a+b);
	}	
	//EOF(End Of File)=-1
} 
