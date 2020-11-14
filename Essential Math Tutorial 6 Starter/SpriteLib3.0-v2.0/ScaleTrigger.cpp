#include "ScaleTrigger.h"
#include "ECS.h"

void ScaleTrigger::OnTrigger()
{
	Trigger::OnTrigger();
	if (!triggered)
	{
		auto& object = ECS::GetComponent<PhysicsBody>(m_targetEntities[0]);
		object.ScaleBody(-1000 * Timer::deltaTime, 0);
		auto& scale = ECS::GetComponent<CanScale>(m_targetEntities[0]);
		scale.m_canscale = true;
		triggered = true;
	}

}

void ScaleTrigger::OnEnter()
{
	Trigger::OnEnter();
	if (!triggered)
	{
		auto& object = ECS::GetComponent<PhysicsBody>(m_targetEntities[0]);
		//object.ScaleBody(-1000 * Timer::deltaTime, 0);
		auto& scale = ECS::GetComponent<CanScale>(m_targetEntities[0]);
		scale.m_canscale = true;
		triggered = true;
		ECS::GetComponent<Sprite>(m_triggerEntity).SetTransparency(0);
	}
}

void ScaleTrigger::OnExit()
{
	Trigger::OnExit();
}
