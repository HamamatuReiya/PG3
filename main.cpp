#include<stdio.h>

int SalaryCalculation(int time,int num) {
	if (time <= 1) {
		return num;
	}
	
	printf("%d‰~\n", num);
	return (num + SalaryCalculation(time - 1,num * 2 - 50));
}

int main() {
	int wokeTime = 8;
	int result = SalaryCalculation(wokeTime,100);

	return 0;
}