#include <stdio.h>

main()
{
	int a,b;
	scanf("%d %d",&a,&b); //b=385
	
	printf("%d\n",a*(b%10)); //385%10=5->일의자리수 
	printf("%d\n",a*(b/10%10)); //385/10=38 -> 38%10=8 ->십의자리수 
	printf("%d\n",a*(b/100)); //385/100=3 -> 백의자리수 
	printf("%d",a*b); 
}
