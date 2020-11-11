#include "RotationTrigger.h"
#include "ECS.h"



RotationTrigger::RotationTrigger(float degree)
{
	angle = degree;
}
void RotationTrigger::OnTrigger()
{
	Trigger::OnTrigger();

	auto& object = ECS::GetComponent<PhysicsBody>(m_targetEntities[0]);
	//object.GetBody()->SetTransform(object.GetBody()->GetWorldCenter(), angle);
	angle = angle * 3.14 / 180;

	b2Vec2 center = object.GetBody()->GetWorldCenter();
	b2Vec2 corner = b2Vec2(center.x + object.GetWidth() / 2, center.y + object.GetHeight() / 2);
	object.GetBody()->ApplyAngularImpulse(2.0, true);
	//object.GetBody()->SetAngularVelocity(angle);
	
}

void RotationTrigger::OnEnter()
{
	Trigger::OnEnter();
	auto& object = ECS::GetComponent<PhysicsBody>(m_targetEntities[0]);
	//object.GetBody()->SetTransform(object.GetBody()->GetWorldCenter(), angle);
	
	//b2Vec2 center = object.GetBody()->GetWorldCenter();
	//b2Vec2 corner = b2Vec2(center.x - object.GetWidth() / 2, center.y);
	
	object.GetBody()->SetAngularVelocity(angle*3.14/180);


}

void RotationTrigger::OnExit()
{
	Trigger::OnExit();
}
