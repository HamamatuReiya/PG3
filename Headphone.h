#pragma once
#include "Transducer.h"
// ƒwƒbƒhƒzƒ“
class Headphone : public Transducer
{
public:
	Headphone();
	~Headphone();

	void Sound() override;
};

