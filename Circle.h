#pragma once
#include "IShape.h"
class Circle : public IShape
{
public:
	Circle();

	~Circle();

	void Size();

	void Draw();

private:
	//”¼Œa
	float radius = 5;
	//“š‚¦
	float answer = 0;
};

