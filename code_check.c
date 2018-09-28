#include<stdio.h>
#include<stdlib.h>
struct person{
	char name[10];
	int code1;
	int code2;
};
int main()
{
	typedef struct person s;
	s *a;
	int i, newc1, newc2,n,count = 0;
	scanf("%d",&n);
	a = (s*)malloc(n*sizeof(s));
	
	for(i = 0; i < n;++i)
		scanf("%s %d %d",a[i].name,&a[i].code1,&a[i].code2);
	
	scanf("%d %d",&newc1,&newc2);
	
	for(i = 0; i < n;++i){
		if(a[i].code1 == newc1 && a[i].code2 == newc2){
			printf("%s ",a[i].name);
			++count;		
		}
	}
	if(count == 0)
		printf("HELLO");
	return 0;
}

