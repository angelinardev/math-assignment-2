#pragma once
#include "Trigger.h"
class TranslationTrigger :
    public Trigger
{
public:
    void OnTrigger() override;
    TranslationTrigger(float x, float y);
    void OnEnter() override;
    void OnExit() override;

    float posX;
    float posY;

private:
    bool triggered = false;

};

