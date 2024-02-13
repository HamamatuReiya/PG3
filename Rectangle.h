#pragma once
#include "IShape.h"
class Rectangle : public IShape
{
public:
	Rectangle();

	~Rectangle();

	void Size();

	void Draw();

private:
	//èc
	int height = 5;
	//â°
	int width = 10;

	//ìöÇ¶
	int answer = 0;
};

