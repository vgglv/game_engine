#pragma once

namespace GameEngine {
	class GameObject {
	public:
		virtual ~GameObject() = default;
		virtual void update() = 0;
		virtual void draw() = 0;
	};
}
