#pragma once

#ifdef CD_PLATFORM_WINDOWS

extern Cedar::App* Cedar::Create();

int main(int argc, char** argv)
{
	printf("Hello World\n");
	auto app = Cedar::Create();
	app->Run();
	delete app;
}

#endif