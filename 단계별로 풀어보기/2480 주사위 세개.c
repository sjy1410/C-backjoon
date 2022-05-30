#include <stdio.h>

main()
{
	int a,b,c,max=0,gold;
	scanf("%d %d %d",&a,&b,&c);
	
	max=(a>b && a>c)?a:(b>a && b>c)?b:c; // 세 수 중 가장 큰 수
	
	if(a==b && a==c){ // 세 수가 같을 때
		gold=10000+a*1000;
	}
	else if(a==b){  // 두 수가 같을 때
		gold=1000+a*100;
	}
	else if(b==c){ // ''
		gold=1000+b*100;
	} 
	else if(c==a){ // ''
		gold=1000+c*100;
	}
	else{ // 세 수가 다 다를 때
		gold=max*100;	
	}
	
	printf("%d",gold); // 결과 출력
  
}
