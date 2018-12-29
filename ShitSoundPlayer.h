#pragma once
#include"stdafx.h"

class ShitSoundPlayer
{
private:
	Music* _1;
	Music* _2;
	Music* _3;
	Music* _4;
	Music* _5;
public:

	Music* get_music(int track_number);
	void check_pressed_key();
	ShitSoundPlayer();
	~ShitSoundPlayer();
};

