#pragma once

namespace Components
{
	class QuickPatch : public Component
	{
	public:
		QuickPatch();
		~QuickPatch();
		const char* getName() override { return "QuickPatch"; };

	private:
	};
}
