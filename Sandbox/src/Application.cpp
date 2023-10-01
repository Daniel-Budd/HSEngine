#include "DBHitman.h"

class Sandbox : public DBHitman::Application
{
	//
public:
	Sandbox()
	{
		//
	}

	~Sandbox()
	{
		//
	}
};
DBHitman::Application* DBHitman::CreateApplication()
{
	//
	return new Sandbox();
}
