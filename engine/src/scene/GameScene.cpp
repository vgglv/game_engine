#include "GameScene.hpp"

using namespace GameEngine;

std::unique_ptr<GameScene> GameScene::create(const std::string& name) {
	return std::make_unique<GameScene>(name);
}

GameScene::GameScene(std::string name) : scene_name(std::move(name)) {
}

void GameScene::draw() {
	for (const auto& g : game_objects_vector) {
		g->draw();
	}
}

void GameScene::update() {
	for (const auto& g : game_objects_vector) {
		g->update();
	}
}

void GameScene::addChild(std::unique_ptr<GameObject> c) {
	game_objects_vector.emplace_back(std::move(c));
}
