#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern skHazel::Application* skHazel::CreateApplication();

int main(int argc, char** argv)
{
	printf("HAZEL ENGINE !!!\n");
	auto app = skHazel::CreateApplication();

	app->Run();

	delete app;

}

#endif // HZ_PLATFORM_WINDOWS
