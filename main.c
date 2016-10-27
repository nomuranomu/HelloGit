/**
 * [プログラミングドリル02解答例]
 * 100より小さい素数の合計値をコンソールへ出力するプログラムを作成しなさい。
 */
#include <stdio.h>


#define FALSE 0
#define TRUE 1
#define MAXIMUM 100


void print_prime_number(void);

int main(void)
{
    print_prime_number();
	return 0;
}


void print_prime_number(void){

	char primeNumbers[MAXIMUM] = {0};/* 素数判定結果 */
	int i, k, sum;
	
	for (i = 2; i < MAXIMUM; i++)
	{
		primeNumbers[i] = TRUE;
	}

	/* エラトステネスの篩により、素数の合計値を求めます。 */
	for (i = 2; i * i <= MAXIMUM; i++)
	{
		if (primeNumbers[i] == TRUE)
		{
			for (k = i * 2; k <= MAXIMUM; k += i)
			{
				primeNumbers[k] = FALSE;
			}
		}
	}

	sum = 0;
	for (i = 0; i < MAXIMUM; i++)
	{
		if (primeNumbers[i] == TRUE)
		{
			sum += i;
			printf("%4d + %4d = %4d\n", sum - i, i, sum);
		}
	}
	
	printf("%d\n", sum);

}

