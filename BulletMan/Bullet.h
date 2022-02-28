#pragma once
class Bullet
{
public:
	Bullet(SHORT spawnX, SHORT spawnY);
	~Bullet();

	void Update();
	void Render();

	void SetDirection(EDirectionType direction) { this->direction = direction; }

	COORD GetPosition();

private:
	class Timer* timer = nullptr;

	EDirectionType direction = EDirectionType::None;

	SHORT x;
	SHORT y;
};

