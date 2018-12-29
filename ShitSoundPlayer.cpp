#include "ShitSoundPlayer.h"


Music* ShitSoundPlayer::get_music(int track_number)
{
	switch (track_number)
	{
	case 1:
		return _1;
	default:
		cout << "fuck" << endl;
		break;
	}
}
void ShitSoundPlayer::check_pressed_key()
{
	if (Keyboard::isKeyPressed(Keyboard::Z)
		|| Keyboard::isKeyPressed(Keyboard::Num1))
	{
		_1->play();
	}
	if (Keyboard::isKeyPressed(Keyboard::X)
		|| Keyboard::isKeyPressed(Keyboard::Num2))
	{
		_2->play();
	}
	if (Keyboard::isKeyPressed(Keyboard::C)
		|| Keyboard::isKeyPressed(Keyboard::Num3))
	{
		_3->play();
	}
	if (Keyboard::isKeyPressed(Keyboard::V)
		|| Keyboard::isKeyPressed(Keyboard::Num4))
	{
		_4->play();
	}
	if (Keyboard::isKeyPressed(Keyboard::B)
		|| Keyboard::isKeyPressed(Keyboard::Num5))
	{
		_5->play();
	}
}
ShitSoundPlayer::ShitSoundPlayer()
{
	_1 = new Music();
	_2 = new Music();
	_3 = new Music();
	_4 = new Music();
	_5 = new Music();


	_1->openFromFile("audio/t1.ogg");
	_2->openFromFile("audio/t2.ogg");
	_3->openFromFile("audio/t3.ogg");
	_4->openFromFile("audio/t4.ogg");
	_5->openFromFile("audio/t5.ogg");
}


ShitSoundPlayer::~ShitSoundPlayer()
{
	delete _1;
	delete _2;
	delete _3;
	delete _4;
	delete _5;
}
