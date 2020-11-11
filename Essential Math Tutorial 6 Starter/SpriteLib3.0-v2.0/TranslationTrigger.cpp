#include "TranslationTrigger.h"
#include "ECS.h"

TranslationTrigger::TranslationTrigger(float x, float y)
{
	posX = x;
	posY = y;

}
void TranslationTrigger::OnTrigger()
{
	Trigger::OnTrigger();

	if (!triggered)
	{
		//change position of triggered object
		auto& object = ECS::GetComponent<PhysicsBody>(m_targetEntities[0]);
		//object.GetBody()->SetTransform(b2Vec2(posX, posY), object.GetBody()->GetAngle());

		float x_dis = posX - object.GetPosition().x;
		float y_dis = posY - object.GetPosition().y;


		object.GetBody()->SetLinearVelocity(b2Vec2(x_dis * 60, y_dis * 30));


		//object.GetBody()->SetLinearVelocity(b2Vec2(0, 0.f));


		triggered = true;
	}

}

void TranslationTrigger::OnEnter()
{
	Trigger::OnEnter();

	if (!triggered)
	{
		//change position of triggered object
		auto& object = ECS::GetComponent<PhysicsBody>(m_targetEntities[0]);
		//object.GetBody()->SetTransform(b2Vec2(posX, posY), object.GetBody()->GetAngle());

		float x_dis = posX - object.GetPosition().x;
		float y_dis = posY - object.GetPosition().y;


		object.GetBody()->SetLinearVelocity(b2Vec2(x_dis * 60, y_dis * 30));


		//object.GetBody()->SetLinearVelocity(b2Vec2(0, 0.f));


		triggered = true;
	}

}


void TranslationTrigger::OnExit()
{
	Trigger::OnExit();
}