#include<stdio.h>
#include "Circle.h"
#include "Rectangle.h"

int main() {

	IShape* Ishape[] = {
		new Circle(),
		new Rectangle()
	};

	Ishape[0]->Draw();
	Ishape[1]->Draw();

	return 0;
}