#include "Headphone.h"
#include <stdio.h>

Headphone::Headphone()
{
	name = "ƒwƒbƒhƒzƒ“";
}

Headphone::~Headphone()
{
}

void Headphone::Sound()
{
	printf("%s\n", name);
}
