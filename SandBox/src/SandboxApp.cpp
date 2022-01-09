#include <Hazel.h>

class Sandbox : public skHazel::Application
{
public:
	Sandbox()
	{

	}
	~Sandbox()
	{

	}
};


skHazel::Application* skHazel::CreateApplication()
{
	return new Sandbox(); 
}