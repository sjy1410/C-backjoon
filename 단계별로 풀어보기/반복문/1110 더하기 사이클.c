#include <stdio.h>

main()
{
	int n,result;
	scanf("%d",&n); 
	
	result=n; // result는 처음 입력받은 수 
	
	int a,b,c,d;
	int cnt=0; 
	
	while(1){
		a=n/10; // 십의(왼쪽)자리수
		b=n%10; // 일의(오른쪽)자리수
		c=(a+b)%10; // 앞에서 구한 합의 일의(오른쪽)자리수
		d=(b*10)+c; // 새로운 수 
		
		n=d; // 새로운 수를 n값으로 지정 
		cnt++; // n의 사이클 횟수 카운트 
		
		if(d==result){
			break; //새로운 수가 처음 입력받은 횟수와 같으면 while문 종료 
		} 
	}
	
	printf("%d",cnt); // n의 사이클 횟수 출력 
} 
