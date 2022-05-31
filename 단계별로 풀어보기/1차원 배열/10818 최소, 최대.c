#include <stdio.h>

main()
{
	int n;
	scanf("%d",&n); 
	int a[n]; 
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]); 
	}
	
	int min=a[0],max=a[0];
	
	for(int j=0;j<n;j++){
		if(a[j]<min) min=a[j];
		if(a[j]>max) max=a[j];
	}
	
	printf("%d %d",min,max);
	//배열을 이용한 반복문은 변수를 0으로 시작해야한다. 
}
