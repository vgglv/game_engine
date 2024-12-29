#pragma once
#include <string>

namespace GameEngine {
	namespace defaults {
		constexpr const int DEFAULT_WIDTH = 840;
		constexpr const int DEFAULT_HEIGHT = 600;
	}
	class Engine {
	public:
		Engine() = default;
		~Engine() = default;

		void setGameResolution(int _width, int _height);
		void setGameTitle(const std::string& _title);
		bool startMainLoop();
	private:
		int width = defaults::DEFAULT_WIDTH;
		int height = defaults::DEFAULT_HEIGHT;
		std::string title = "Default Title";
	};
}
