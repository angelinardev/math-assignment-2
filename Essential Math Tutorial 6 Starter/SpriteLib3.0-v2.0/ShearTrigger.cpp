#include "ShearTrigger.h"
#include "ECS.h"

void ShearTrigger::OnTrigger()
{
	Trigger::OnTrigger();

}

void ShearTrigger::OnEnter()
{
	Trigger::OnEnter();
	if (!triggered)
	{
		auto& object = ECS::GetComponent<PhysicsBody>(m_targetEntities[0]);
		auto& skew = ECS::GetComponent<CanSkew>(m_targetEntities[0]);
		//object.SkewBody(2, 0);
		skew.m_canskew = true;
		triggered = true;
		ECS::GetComponent<Sprite>(m_triggerEntity).SetTransparency(0);
	}

}

void ShearTrigger::OnExit()
{
	Trigger::OnExit();

}
