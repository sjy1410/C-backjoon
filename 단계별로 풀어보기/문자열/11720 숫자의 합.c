#include <stdio.h>

main()
{
	int n;
	scanf("%d",&n);
	
	char a[n]; // 배열 a에 입력되는 숫자를 아스키코드 값으로 받는다.
	scanf("%s",&a); // 한줄에 공백없이 받으므로 for문 대신 문자열로 받는다. 
	
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=a[i]-'0'; // 아스키코드값('0'=48을 빼야 숫자값이 나옴)을 sum에 계속해서 더해준다.  
	}
	// ex) '1'-'0'=49-48=1
	
	printf("%d",sum);
	
}
