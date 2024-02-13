#include "Transducer.h"
#include <stdio.h>

Transducer::Transducer()
{
	name = "•ÏŠ·Ší";
}

Transducer::~Transducer() {}

void Transducer::Sound()
{
	printf("‰¹‚Ì%s\n", name);
}
