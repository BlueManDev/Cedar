#pragma once

#include "Core.h"

namespace Cedar
{
	class CEDAR_API App
	{
	public:
		App();
		virtual ~App();

		void Run();
	};

	// To be defined in CLIENT
	App* Create();
}