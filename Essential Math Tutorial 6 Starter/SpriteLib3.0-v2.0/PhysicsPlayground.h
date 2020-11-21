#pragma once

#include "Scene.h"
#include "PhysicsPlaygroundListener.h"

class PhysicsPlayground : public Scene
{
public:
	PhysicsPlayground(std::string name);

	void InitScene(float windowWidth, float windowHeight) override;

	void Update() override;

	//Input overrides
	void KeyboardHold() override;
	void KeyboardDown() override;
	void KeyboardUp() override;

protected:
	PhysicsPlaygroundListener listener;

	int wall = 0;
	int moving1 = 0;
	int rotate1 = 0;
	int pentagon = 0;
	int triangle = 0;
	int ball = 0;
	int wall2 = 0;
	int box = 0;
	int ceiling = 0;
};
