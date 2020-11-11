#pragma once
#include "Trigger.h"
#include "Scene.h"

class RotationTrigger :
    public Trigger
{
public:
	RotationTrigger(float degree);
	void OnTrigger() override;
	void OnEnter() override;
	void OnExit() override;
	float angle;
	
private:

};

