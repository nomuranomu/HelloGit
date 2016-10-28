#include <stdio.h>
int main(void) 
{ 
	int a, b;
	a = b = 4;
	printf("%d  %d\n", a, b);
	a = b == 5;	/* 2つ目の演算子は==であることに注意！ */
	printf("%d  %d\n", a, b);
	
	// 変更箇所
	
	int c;
	
	c = a;
	a = b;
	b = c;
	printf("%d  %d\n", a, b);
	
	return 0; 
}

