#include "Enemy.h"
#include <stdio.h>

void (Enemy::* Enemy::spPhaseTable[])() = {
	&Enemy::Approach,
	&Enemy::Fire,
	&Enemy::Leave,
};

void Enemy::Update()
{
	for (int i = 0; i < 3; i++) {
		(this->*spPhaseTable[i])();
	}
	
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
