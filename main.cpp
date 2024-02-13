#include<stdio.h>
#include "Box.h"

int main() {
	Box<int, int>n1(10, 5);
	Box<float, float>n2(3.5f, 2.4f);
	Box<double, double>n3(7.5, 9.9);
	Box<int, float>n4(10, 5.0f);
	Box<int, double>n5(3, 4.0);
	Box<float, double>n6(15.0f, 18.0);

	printf("%d\n", n1.Min());
	printf("%f\n", n2.Min());
	printf("%lf\n", n3.Min());
	printf("%d\n", n4.Min());
	printf("%d\n", n5.Min());
	printf("%f\n", n6.Min());

	return 0;
}