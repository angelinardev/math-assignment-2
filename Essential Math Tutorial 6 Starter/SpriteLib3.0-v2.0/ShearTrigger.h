#pragma once
#include "Trigger.h"
class ShearTrigger :
    public Trigger
{
public:
	void OnTrigger() override;
	void OnEnter() override;
	void OnExit() override;
private:
	bool triggered = false;
};

