#include <stdio.h>

main()
{
	int h,m,t;
	scanf("%d %d",&h,&m);
	scanf("%d",&t);
	
	h+=t/60;
	m+=t%60;
	
	if(m>=60){
		h+=1;
		m-=60;
	}
	
 	if(h>=24){ //변수가 다를 떈, else if로 지정하면 작동하지 않는다. 
		h-=24;
	} 
	
	printf("%d %d",h,m);
	
}
