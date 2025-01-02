#pragma once
#include <string>
#include <vector>
#include <memory>
#include "game/GameObject.hpp"

namespace GameEngine {
	class GameScene {
	public:
		static std::unique_ptr<GameScene> create(const std::string& name);
		explicit GameScene(std::string name);
		~GameScene() = default;

		virtual void draw();
		virtual void update();
		void addChild(std::unique_ptr<GameObject> c);
	private:
		std::vector<std::unique_ptr<GameObject>> game_objects_vector;
		std::string scene_name;
	};
}
