#include<stdio.h>

template <typename Type1>
Type1 add(Type1 a, Type1 b) {
	if (a < b) {
		return a;
	}
	else
	{
		return b;
	}
}

template<>
char add<char>(char a, char b) {
	printf("”šˆÈŠO‚Í‘ã“ü‚Å‚«‚Ü‚¹‚ñ");
	return a;
}

int main() {

	printf("%d\n", add<int>(114, 514));
	printf("%f\n", add<float>(11.4f, 51.4f));
	printf("%f\n", add<double>(11.4f, 51.4f));
	add<char>(114,514);
	
	


	return 0;
}