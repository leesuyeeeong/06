#include <stdio.h>

int sumTwo( int a, int b )
{
	int output;
	output = a + b;
	return output;
}
//두개의 정수를 더하는 함수

int square(int n)
{
	return (n * n);
}
//정수의 제곱을 계산하는 함수
 
int get_max( int x, int y )
{
	if ( x > y ) return (x);
	else return (y);
}
//두개의 정수 중에서 큰 수를 계산하는 함수

int main(void){
	
	int result;
	result = square(5);
	printf("%d",result);
	
}

