#include <stdio.h>

main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c); 
	int abc=a*b*c; 
	
	int arr[10]={0,0,0,0,0,0,0,0,0,0},n; //배열 초기화 안하면 쓰레기값 
	while(abc>0){
		n=abc%10; //n은 abc의 맨끝의자리수 값 
		arr[n]++; //n번쨰 배열 = abc 자릿수 증가 
		abc=abc/10; //abc의 다음 자릿수 
	}
	
	for(int i=0;i<=9;i++){
		printf("%d\n",arr[i]);
	}
	
}
