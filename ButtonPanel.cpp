#include "ButtonPanel.h"

ButtonPanel::ButtonPanel(Gui & gui, ShitSoundPlayer & player)
{
	theme.load("themes/Black.txt");

	annotation = Label::create();
	annotation->setRenderer(theme.getRenderer("Label"));
	annotation->setText("Pitch down/up");
	annotation->setSize(50, 50);
	annotation->setPosition(0, 0);
	gui.add(annotation);

	down_pitch_of_1 = Button::create();
	down_pitch_of_1->setSize(50, 50);
	down_pitch_of_1->setText("-");
	down_pitch_of_1->setPosition(0, 50);
	down_pitch_of_1->connect("pressed", [&]() { player.get_music(1)->setPitch(player.get_music(1)->getPitch()-0.1f); });
	down_pitch_of_1->setRenderer(theme.getRenderer("Button"));

	gui.add(down_pitch_of_1);

	up_pitch_of_1   = Button::create();
	up_pitch_of_1->setSize(50, 50);
	up_pitch_of_1->setText("+");
	up_pitch_of_1->setPosition(50, 50);
	up_pitch_of_1->connect("pressed", [&]() { player.get_music(1)->setPitch(player.get_music(1)->getPitch() + 0.1f); });
	up_pitch_of_1->setRenderer(theme.getRenderer("Button"));
	gui.add(up_pitch_of_1);

	down_pitch_of_2 = Button::create();
	down_pitch_of_2->setSize(50, 50);
	down_pitch_of_2->setText("-");
	down_pitch_of_2->setPosition(100, 50);
	down_pitch_of_2->connect("pressed", [&]() { player.get_music(2)->setPitch(player.get_music(2)->getPitch() - 0.1f); });
	down_pitch_of_2->setRenderer(theme.getRenderer("Button"));
	gui.add(down_pitch_of_2);

	up_pitch_of_2   = Button::create();
	up_pitch_of_2->setSize(50, 50);
	up_pitch_of_2->setText("+");
	up_pitch_of_2->setPosition(150, 50);
	up_pitch_of_2->connect("pressed", [&]() { player.get_music(2)->setPitch(player.get_music(2)->getPitch() + 0.1f); });
	up_pitch_of_2->setRenderer(theme.getRenderer("Button"));
	gui.add(up_pitch_of_2);

	down_pitch_of_3 = Button::create();
	down_pitch_of_3->setSize(50, 50);
	down_pitch_of_3->setText("-");
	down_pitch_of_3->setPosition(200, 50);
	down_pitch_of_3->connect("pressed", [&]() { player.get_music(3)->setPitch(player.get_music(3)->getPitch() - 0.1f); });
	down_pitch_of_3->setRenderer(theme.getRenderer("Button"));
	gui.add(down_pitch_of_3);

	up_pitch_of_3   = Button::create();
	up_pitch_of_3->setSize(50, 50);
	up_pitch_of_3->setText("+");
	up_pitch_of_3->setPosition(250, 50);
	up_pitch_of_3->connect("pressed", [&]() { player.get_music(3)->setPitch(player.get_music(3)->getPitch() + 0.1f); });
	up_pitch_of_3->setRenderer(theme.getRenderer("Button"));
	gui.add(up_pitch_of_3);

	down_pitch_of_4 = Button::create();
	down_pitch_of_4->setSize(50, 50);
	down_pitch_of_4->setText("-");
	down_pitch_of_4->setPosition(300, 50);
	down_pitch_of_4->connect("pressed", [&]() { player.get_music(4)->setPitch(player.get_music(4)->getPitch() - 0.1f); });
	down_pitch_of_4->setRenderer(theme.getRenderer("Button"));
	gui.add(down_pitch_of_4);

	up_pitch_of_4   = Button::create();
	up_pitch_of_4->setSize(50, 50);
	up_pitch_of_4->setText("+");
	up_pitch_of_4->setPosition(350, 50);
	up_pitch_of_4->connect("pressed", [&]() { player.get_music(4)->setPitch(player.get_music(4)->getPitch() + 0.1f); });
	up_pitch_of_4->setRenderer(theme.getRenderer("Button"));
	gui.add(up_pitch_of_4);

	down_pitch_of_5 = Button::create();
	down_pitch_of_5->setSize(50, 50);
	down_pitch_of_5->setText("-");
	down_pitch_of_5->setPosition(400, 50);
	down_pitch_of_5->connect("pressed", [&]() { player.get_music(5)->setPitch(player.get_music(5)->getPitch() - 0.1f); });
	down_pitch_of_5->setRenderer(theme.getRenderer("Button"));
	gui.add(down_pitch_of_5);

	up_pitch_of_5   = Button::create();
	up_pitch_of_5->setSize(50, 50);
	up_pitch_of_5->setText("+");
	up_pitch_of_5->setPosition(450, 50);
	up_pitch_of_5->connect("pressed", [&]() { player.get_music(5)->setPitch(player.get_music(5)->getPitch() + 0.1f); });
	up_pitch_of_5->setRenderer(theme.getRenderer("Button"));
	gui.add(up_pitch_of_5);


	

}


ButtonPanel::~ButtonPanel()
{
}
