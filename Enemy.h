#pragma once

class Enemy
{
private:
	enum class Phase {
		kApproach,
		kFire,
		kLeave,
	};

public:
	/// <summary>
	/// –ˆƒtƒŒ[ƒ€ˆ—
	/// </summary>
	void Update();

private:
	// Ú‹ß‚·‚é
	void Approach();
	// ’e”­Ë
	void Fire();
	// —£’E‚·‚é
	void Leave();


private:
	Phase phase_ = Phase::kApproach;

	static void (Enemy::* spPhaseTable[])();
};

