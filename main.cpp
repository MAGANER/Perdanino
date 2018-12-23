#include"ShitSoundPlayer.h"

int main()
{

	RenderWindow window(sf::VideoMode(720, 740), "Perdanino 1.0");
	ShitSoundPlayer player;


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		player.check_pressed_key();

		window.clear();
		window.display();
	}
	return 0;
}
