#include "Enemy.h"
#include <stdio.h>

void (Enemy::* Enemy::spPhaseTable[])() = {
	&Enemy::Approach,
	&Enemy::Fire,
	&Enemy::Leave,
};

void Enemy::Update()
{
	switch (phase_) {
	case Phase::kApproach:
		(this->*spPhaseTable[0])();
		break;

	case Phase::kFire:
		(this->*spPhaseTable[1])();
		break;

	case Phase::kLeave:
		(this->*spPhaseTable[2])();
		break;
	}
}

void Enemy::Approach()
{
	printf("“G‚ÌÚ‹ß\n");
	phase_ = Phase::kFire;
}

void Enemy::Fire()
{
	printf("“G‚ÌËŒ‚\n");
	phase_ = Phase::kLeave;
}

void Enemy::Leave()
{
	printf("“G‚Ì—£’E\n");
}
