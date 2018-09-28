// number missing in array
// ex i/p: n = 5 , a[]= {1 2 3 5} o/p: 4

#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, total = 0, *a , i;
	 scanf("%d" ,&n);
	 a = (int *)malloc(n*sizeof(int));
	for (i =0 ; i < n -1 ;i++)
		scanf("%d" , &a[i]);

	total = n*(n+1)/2;
	
	for (i =0 ; i < n-1 ;i++){
		total = total - a[i];} 

	printf("%d", total);
	return 0;
}
