#include <stdio.h>

int sumTwo( int a, int b )
{
	int output;
	output = a + b;
	return output;
}
//�ΰ��� ������ ���ϴ� �Լ�

int square(int n)
{
	return (n * n);
}
//������ ������ ����ϴ� �Լ�
 
int get_max( int x, int y )
{
	if ( x > y ) return (x);
	else return (y);
}
//�ΰ��� ���� �߿��� ū ���� ����ϴ� �Լ�

int main(void){
	
	int result;
	result = square(5);
	printf("%d",result);
	
}

