#include "ShitSoundPlayer.h"


void ShitSoundPlayer::check_pressed_key()
{
	if (Keyboard::isKeyPressed(Keyboard::Z)
		|| Keyboard::isKeyPressed(Keyboard::Num1))
	{
		_1.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::X)
		|| Keyboard::isKeyPressed(Keyboard::Num2))
	{
		_2.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::C)
		|| Keyboard::isKeyPressed(Keyboard::Num3))
	{
		_3.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::V)
		|| Keyboard::isKeyPressed(Keyboard::Num4))
	{
		_4.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::B)
		|| Keyboard::isKeyPressed(Keyboard::Num5))
	{
		_5.play();
	}
}
ShitSoundPlayer::ShitSoundPlayer()
{
	_1.openFromFile("audio/t1.ogg");
	_2.openFromFile("audio/t2.ogg");
	_3.openFromFile("audio/t3.ogg");
	_4.openFromFile("audio/t4.ogg");
	_5.openFromFile("audio/t5.ogg");
}


ShitSoundPlayer::~ShitSoundPlayer()
{
}
