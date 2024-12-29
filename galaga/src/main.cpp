#include <cstdlib>
#include "engine/Engine.hpp"

int main() {
	GameEngine::Engine engine;
	engine.setGameResolution(800, 800);
	engine.setGameTitle("Galaga");
	if (!engine.startMainLoop()) {
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
