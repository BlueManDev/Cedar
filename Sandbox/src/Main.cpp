#include <Cedar.h>

class Sandbox : public Cedar::App
{
public:
	Sandbox()
	{
	}

	~Sandbox()
	{
	}
};

Cedar::App* Cedar::Create()
{
	return new Sandbox();
}