#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>

typedef void (*PFunc)(int*, int*);

void DispResult(int* dice, int* num) {
	if (*dice == 0) {
		if (*num == 0) {
			printf("丁!　当たり!\n");
		}
		else {
			printf("半!　残念...\n");
		}
	}

	if (*dice == 1) {
		if (*num == 1) {
			printf("半!　当たり!\n");
		}
		else {
			printf("丁!　残念...\n");
		}
	}

}

void setTimeout(PFunc p, int second, int select, int num) {
	Sleep(second * 1000);

	p(&select, &num);
}

int main() {

	unsigned int  currentTime = time(nullptr);
	srand(currentTime);

	PFunc p;

	int r = rand();
	int dice;
	int number = 0;

	printf("半(0)か丁(1)を選んでください\n");
	scanf_s("%d", &number);
	printf("選んだ数字 : %d\n", number);

	dice = r % 2 + 0;

	p = DispResult;
	setTimeout(p, 3, number, dice);

	return 0;
}