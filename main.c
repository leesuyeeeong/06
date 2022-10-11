#include <stdio.h>

void func(int x) {
	
	printf("func x is at %p\n", &x);
}

int main(void) {
	int x;
	printf("main x is at %p\n", &x);
	func(x);
	
	return 0;
}
//함수 실행시 메모리 상태 관찰 

