#include <stdio.h>
#include <stdlib.h>
int main() {
	int t;
	scanf("%d",&t);
	
	while(t--){
	    int n, i ,*a , sum =0 ,max_sum = 0;
	    scanf("%d", &n);
	    
	    a = (int*)malloc(n*sizeof(int));
	    
	    for(i =0 ;i < n ; i++)
	      scanf("%d",&a[i]);
	      
	    for (i =0 ;i <n ;i++)
	     {
	         sum = sum + a[i];
	         
	         if (max_sum <sum)
	           max_sum = sum;
	           
	         else if (sum < 0)
	           sum = 0;
	           
	     }
	   printf("%d",max_sum);
	}
	return 0;
}
