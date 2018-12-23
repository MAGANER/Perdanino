#pragma once
#include"SFML\Audio.hpp"
#include"SFML\Graphics.hpp"

using namespace sf;

class ShitSoundPlayer
{
private:
	Music first;
	Music second;
	Music third;
	Music fourth;
	Music fifth;
public:
	void check_pressed_key();
	ShitSoundPlayer();
	~ShitSoundPlayer();
};

