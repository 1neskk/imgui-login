#include "Walnut/Application.h"
#include "Walnut/EntryPoint.h"

#include "Walnut/Image.h"
#include "Theme.h"


class ExampleLayer : public Walnut::Layer
{
public:
	virtual void OnUIRender() override
	{
		theme.Init();
		if(theme.InfWindow)
			theme.InfLog();
	
		//ImGui::ShowDemoWindow();
	}

private:
	Theme theme;
};

Walnut::Application* Walnut::CreateApplication(int argc, char** argv)
{
	Walnut::ApplicationSpecification spec;
	spec.Name = "Login";

	Walnut::Application* app = new Walnut::Application(spec);
	app->PushLayer<ExampleLayer>();
	return app;
}
