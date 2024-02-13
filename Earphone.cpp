#include "Earphone.h"
#include <stdio.h>

Earphone::Earphone()
{
	name = "ƒCƒ„ƒzƒ“";
}

Earphone::~Earphone()
{
}

void Earphone::Sound()
{
	printf("%s\n", name);
}
