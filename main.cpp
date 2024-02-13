#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <time.h>
#include <functional>

int main() {

	unsigned int  currentTime = time(nullptr);
	srand(currentTime);

	int r = rand();
	int dice = r % 2 + 0;
	int number = 0;

	printf("半(0)か丁(1)を選んでください\n");
	scanf_s("%d", &number);
	printf("選んだ数字 : %d\n", number);

	std::function<void(void)> dispResult = [=]() {
		if (dice == 0) {
			if (number == 0) {
				printf("丁!　当たり!\n");
			}
			else {
				printf("半!　残念...\n");
			}
		}

		if (dice == 1) {
			if (number == 1) {
				printf("半!　当たり!\n");
			}
			else {
				printf("丁!　残念...\n");
			}
		}
		};

	std::function<void(int)> setTimeout = [=](int second) {

		Sleep(second * 1000);

		dispResult();
		};

	setTimeout(3);

	return 0;
}