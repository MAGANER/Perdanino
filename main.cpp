#include"ShitSoundPlayer.h"
#include"ButtonPanel.h"


int main()
{

	RenderWindow window(sf::VideoMode(450, 100), "Perdanino 2.0");
	Gui gui{ window };

	

	ShitSoundPlayer player;
	ButtonPanel panel(gui);


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			gui.handleEvent(event);
		}

		player.check_pressed_key();

		window.clear();
		gui.draw();
		window.display();
	}
	return 0;
}
