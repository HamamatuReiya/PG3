#include "Enemy.h"
#include <stdio.h>

void (Enemy::* Enemy::spPhaseTable[])() = {
	&Enemy::Approach,
	&Enemy::Fire,
	&Enemy::Leave,
};

void Enemy::Update()
{
	(this->*spPhaseTable[static_cast<size_t>(phase_)])();
}

void Enemy::Approach()
{
	printf("�G�̐ڋ�\n");
	phase_ = Phase::kFire;
}

void Enemy::Fire()
{
	printf("�G�̎ˌ�\n");
	phase_ = Phase::kLeave;
}

void Enemy::Leave()
{
	printf("�G�̗��E\n");
}
