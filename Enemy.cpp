#include "Enemy.h"
#include <stdio.h>

void (Enemy::* Enemy::spPhaseTable[])() = {
	&Enemy::Approach,
	&Enemy::Fire,
	&Enemy::Leave,
};

void Enemy::Update()
{
	(this->*spPhaseTable[0])();
	(this->*spPhaseTable[1])();
	(this->*spPhaseTable[2])();
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
