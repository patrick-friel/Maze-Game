#pragma once
#include "PlaceableActor.h"

class Door : public PlaceableActor
{
public:
	Door(int x, int y, ActorColor color, ActorColor closedColor);
	virtual void Draw() override;
	
	virtual ActorType GetType() override { return ActorType::Door; }
	bool IsOpen() { return m_IsOpen; }
	void Open() { m_IsOpen = true; }

private:
	bool m_IsOpen;
	ActorColor m_closedColor;
};
