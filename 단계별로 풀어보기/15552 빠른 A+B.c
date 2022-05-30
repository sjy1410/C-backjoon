#include <stdio.h>

main()
{
	int n,a,b;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		scanf("%d %d",&a,&b);
		printf("%d\n",a+b);
	}
	//scanf엔 \n 붙이지 않기 
}
