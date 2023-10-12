#include<stdio.h>

template <typename Type1>
Type1 Min(Type1 a, Type1 b) {
	if (a < b) {
		return a;
	}
	else
	{
		return b;
	}
}

template<>
char Min<char>(char a, char b) {
	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ");
	return a;
}

int main() {

	char a = 'A';
	char b = 'B';
	printf("%d\n", Min<int>(114, 514));
	printf("%f\n", Min<float>(11.4f, 51.4f));
	printf("%f\n", Min<double>(11.4f, 51.4f));
	Min<char>(a,b);
	
	


	return 0;
}