#include "Level.h"


Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	//Render text
	if (!font.loadFromFile("font/arial.ttf"))
	{
		std::cout << "Error loading font\n";
	}

	text.setFont(font);
	
		
	
	//text.setString(mouse.x,
	//mouse.y); //not a string value
	
	text.setCharacterSize(24);
	text.setFillColor(sf::Color::Red);
	

	
	
}

Level::~Level()
{
	input = nullptr;
}

// handle user input
void Level::handleInput()
{
	
	
	//// if JKL are pressed together output to console
	//if (input->isKeyDown(sf::Keyboard::J));
	//input->setKeyUp(sf::Keyboard::J);
	// 
	//	if (input->isKeyDown(sf::Keyboard::K));
	//		input->setKeyUp(sf::Keyboard::K);

	//		if (input->isKeyDown(sf::Keyboard::L));
	//		input->setKeyUp(sf::Keyboard::L);

				
					
	//{
	//	//input->setKeyUp(sf::Keyboard::K);
	//	//input->setKeyUp(sf::Keyboard::K);
	//	//input->setKeyUp(sf::Keyboard::L);
	//	std::cout << "JKL was pressed\n";
	//}
	//if (input->isKeyDown((sf::Keyboard::J) & (sf::Keyboard::K)& (sf::Keyboard::L)))/*& (sf::Keyboard::K) & (sf::Keyboard::L))*/
	//{
	//	input->setKeyUp((sf::Keyboard::J) & (sf::Keyboard::K) & (sf::Keyboard::L));
	//	std::cout << "JKL were all pressed at the same time\n";
	//}
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	int mouse_x = input->getMouseX();
	int mouse_y = input->getMouseY();
	sf::String s = std::to_string(mouse_x) + " , " + std::to_string(mouse_y);
	text.setString(s);

}

// Update game objects
void Level::update()
{

}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(text);
	endDraw();
}

// Begins rendering to the back buffer. Background colour set to light blue.
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}