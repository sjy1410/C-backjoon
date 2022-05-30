#include <stdio.h>

main()
{
	int h,m;
	scanf("%d %d",&h,&m); 
	
	if(m<45){
		h=h-1;
		m=60-(45-m); 
		if(h<0) h=23; //h에 0이 입력될 떄 위 조건문으로 h값은 -1이된다. 따라서 h<0으로 조건문을 설정해준다. 
	}
	else m=m-45; //m이 45초과면 m에다 45를 빼준다.
	
	printf("%d %d",h,m);
}
