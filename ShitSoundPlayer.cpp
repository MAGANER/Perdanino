#include "ShitSoundPlayer.h"


void ShitSoundPlayer::check_pressed_key()
{
	if (Keyboard::isKeyPressed(Keyboard::Z)
		|| Keyboard::isKeyPressed(Keyboard::Num1))
	{
		first.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::X)
		|| Keyboard::isKeyPressed(Keyboard::Num2))
	{
		second.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::C)
		|| Keyboard::isKeyPressed(Keyboard::Num3))
	{
		third.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::V)
		|| Keyboard::isKeyPressed(Keyboard::Num4))
	{
		fourth.play();
	}
	if (Keyboard::isKeyPressed(Keyboard::B)
		|| Keyboard::isKeyPressed(Keyboard::Num5))
	{
		fifth.play();
	}
}
ShitSoundPlayer::ShitSoundPlayer()
{
	first.openFromFile("audio/t1.ogg");
	second.openFromFile("audio/t2.ogg");
	third.openFromFile("audio/t3.ogg");
	fourth.openFromFile("audio/t4.ogg");
	fifth.openFromFile("audio/t5.ogg");
}


ShitSoundPlayer::~ShitSoundPlayer()
{
}
