#include <cstdlib>
#include "engine/Engine.hpp"
#include "scene/GameScene.hpp"

int main() {
	GameEngine::Engine engine;
	engine.setGameResolution(800, 800);
	engine.setGameTitle("Galaga");
	engine.setScene(std::move(GameEngine::GameScene::create("Menu")));
	if (!engine.startMainLoop()) {
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
