#include<stdio.h>
#include<stdlib.h>

struct books{

	char name[20];
	int id;
};

int main(){

	struct books *bk;
	int i,n,rid, count=0;
	scanf("%d",&n);
	bk = (struct books*)malloc(n*sizeof(struct books));
	
	for(i = 0 ;i < n ; ++i)
		scanf("%s %d ", bk[i].name,&bk[i].id);
	
	scanf("%d",&rid);
	
	for(i = 0; i < n; i++)
	{
		if(rid == bk[i].id){
			printf("book issued");
			++count;}
	}
	if(count== 0)
		printf("book not available");

	
	
	return 0;
}
