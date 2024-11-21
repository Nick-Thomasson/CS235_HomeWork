#include <SFML/Graphics.hpp>
#include <cmath>
#include <map>
#include <string>
#include <vector>
using namespace std;

sf::Vector2f GetRandomPosition(int screenWidth, int screenHeight)
{
	sf::Vector2f pos;
	pos.x = rand() % screenWidth - 64;
	pos.y = rand() % screenHeight - 64;
	return pos;
}
float GetDistance(sf::Vector2f obj1, sf::Vector2f obj2)
{
	return sqrt(pow(obj1.x - obj2.x, 2) + pow(obj1.y - obj2.y, 2));
}
int main()
{
	const int SCREEN_WIDTH = 800;
	const int SCREEN_HEIGHT = 600;

	sf::RenderWindow window(sf::VideoMode(1600, 900), "Hey there!");
	window.setFramerateLimit(60);

	map<string, sf::Texture> textures;
	textures["bunny"].loadFromFile("GameAssets/bunny.png");
	textures["diamond"].loadFromFile("GameAssets/diamond.png");
	textures["grass"].loadFromFile("GameAssets/grass.png");

	sf::Font font;
	font.loadFromFile("GameAssets/PressStart2P.ttf");

	sf::Sprite player;
	player.setTexture(textures["bunny"]);
	player.setPosition(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
	float playerSpeed = 5;
	float playerScore = 0;

	sf::Sprite item;
	item.setTexture(textures["diamond"]);
	item.setPosition(GetRandomPosition(SCREEN_WIDTH, SCREEN_HEIGHT));

	sf::Text scoreText;
	scoreText.setFont(font);
	scoreText.setCharacterSize(30);
	scoreText.setFillColor(sf::Color::White);
	scoreText.setString("Score: " + to_string(playerScore));

	vector<sf::Sprite> groundTiles;
	sf::Sprite ground;
	ground.setTexture(textures["grass"]);
	for (int y = 0; y < SCREEN_HEIGHT; y += 32)
	{
		for (int x = 0; x < SCREEN_WIDTH; x += 32)
		{
			ground.setPosition(x, y);
			groundTiles.push_back(ground);
		}
	}

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		sf::Vector2f playerPos = player.getPosition();

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) { playerPos.x -= playerSpeed; }
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) { playerPos.x += playerSpeed; }

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) { playerPos.y -= playerSpeed; }
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) { playerPos.y += playerSpeed; }

		player.setPosition(playerPos);

		if (GetDistance(player.getPosition(), item.getPosition()) <= 16)
		{
			item.setPosition(GetRandomPosition(SCREEN_WIDTH, SCREEN_HEIGHT));
			playerScore++;
			scoreText.setString("Score: " + to_string(playerScore));
		}

		window.clear();

		for (auto& tile : groundTiles)
		{
			window.draw(tile);
		}

		window.draw(item);
		window.draw(player);
		window.draw(scoreText);

		window.display();
	}

	return 0;
}
