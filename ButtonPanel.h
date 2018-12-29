#pragma once
#include"TGUI\TGUI.hpp"
using namespace tgui;


class ButtonPanel
{
private:
	Theme theme;


	Button::Ptr down_pitch_of_1;
	Button::Ptr up_pitch_of_1;

	Button::Ptr down_pitch_of_2;
	Button::Ptr up_pitch_of_2;

	Button::Ptr down_pitch_of_3;
	Button::Ptr up_pitch_of_3;

	Button::Ptr down_pitch_of_4;
	Button::Ptr up_pitch_of_4;

	Button::Ptr down_pitch_of_5;
	Button::Ptr up_pitch_of_5;
	


public:
	ButtonPanel(Gui & gui);
	~ButtonPanel();
};

