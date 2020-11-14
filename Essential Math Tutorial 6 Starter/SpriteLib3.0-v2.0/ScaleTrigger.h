#pragma once
#include "Trigger.h"
class ScaleTrigger :
    public Trigger
{
public:
	void OnTrigger() override;
	void OnEnter() override;
	void OnExit() override;
private:
	bool triggered = false;
};

