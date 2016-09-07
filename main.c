#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, num;
	int *a;

	
	printf("配列の要素数の入力："); 
	scanf("%d", &num);
	
	a = (int*) malloc(sizeof(int)*num);
	
	if(a == NULL){
		printf("メモリ確保失敗\n");
		return 1;
	}
	
	for(i=0; i<num; i++){
		a[i] = i;
		printf("%d ", a[i]);
	}
	free(a);	

	/* @@@ wite your code above */

	return 0;
}
