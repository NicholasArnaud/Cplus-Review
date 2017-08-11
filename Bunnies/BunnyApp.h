#pragma once
#include "Application.h"
#include <time.h>
#include <iostream>

enum Color
{
	White = 0,
	Black = 1,
	Spotted = 2,
	Brown = 3,
};

class BunnyApp :
	public Application
{

public:
	BunnyApp();
	~BunnyApp();
	bool m_gender;
	unsigned int m_age;
	Color m_color;
	char* m_name;
	bool m_RVB;

	bool SetColor(Color BunnyColor);
	void SetVariables();

	// Inherited via Application
	bool Startup() override;

	bool update(float) override;

	bool draw() override;


};

