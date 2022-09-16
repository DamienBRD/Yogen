#include <Yogen.h>

class Sandbox : public Yogen::Application {
public:
	Sandbox() {

	}

	~Sandbox() {

	}
};

Yogen::Application* Yogen::CreateApplication() {
	return new Sandbox();
}