#include<stdio.h>
#include<thread>

void Thread1() {
	printf("thread1\n");
}

void Thread2() {
	printf("thread2\n");
}

void Thread3() {
	printf("thread3\n");
}

int main() {
	std::thread th1(Thread1);
	std::thread th2(Thread2);
	std::thread th3(Thread3);

	th1.join();
	th2.join();
	th3.join();

	return 0;
}