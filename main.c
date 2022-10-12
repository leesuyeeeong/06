#include <stdio.h>
#include<string.h>

long long fact(int num) {
	if (num == 1 || num == 0) {
		return 1;
	}
	return num * fact(num - 1);
}
int combi(int n, int r) {
	if (n == r) {
		return 1;
	}
	int a = fact(n);
	int b = fact(r);
	int c = fact(abs(n - r));
	return a / (b*c);
}
int main() {
	int n, r, res;

	printf("�� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &n, &r);

	res = combi(n, r);
	printf("c(%d, %d) = %d", n, r, res);


	return 0;
}

