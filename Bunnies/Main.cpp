#include <iostream>
#include "BunnyApp.h"


int main()
{
	Application* application = new BunnyApp();

	application->Run("Bunnies", 800, 600, false);

	return 0;
}

