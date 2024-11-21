# Building a simple game with SFML

Now we'll create a simple game with SFML.

You can also find additional resources for SFML here:

* https://www.sfml-dev.org/tutorials/2.6/
* https://www.sfml-dev.org/documentation/2.6.1/annotated.php


## Setup

We will keep working in the project where you had your green test circle display, but we're going to customize it further.

First up,  move the **GameAssets** folder into your project directory (VS: Where your vcxproj file is, CB: Where your cbp file is, or wherever your executable file will be once built).

You can erase the contents of your `main()` function, as we're going to be stepping through the game build process from scratch.


## Editing the code

### Includes

Add includes for the following at the top of the source file:

```
#include <cmath>
#include <map>
#include <string>
```


### Helper functions

Add these functions into your program. You can paste them in before `main()`:

```
sf::Vector2f GetRandomPosition( int screenWidth, int screenHeight )
{
    sf::Vector2f pos;
    pos.x = rand() % screenWidth - 64;
    pos.y = rand() % screenHeight - 64;
    return pos;
}

float GetDistance( sf::Vector2f obj1, sf::Vector2f obj2 )
{
    return sqrt( pow( obj1.x - obj2.x, 2 ) + pow( obj1.y - obj2.y, 2 ) );
}
```


### Setting up the game

1. Create named constants for the window resolution, like
   ```
   const int SCREEN_WIDTH = 800;
   const int SCREEN_HEIGHT = 600;
   ```

2. Create the game window, which is an SFML RenderWindow object and sets the window title to "My Game" (You can change this if you want.)
   `sf::RenderWindow window( sf::VideoMode( SCREEN_WIDTH, SCREEN_HEIGHT), "My Game" );`

3. Set the game framerate to 60 fps:
   `window.setFramerateLimit( 60 );`

4. Create a map to store all the images we'll use in the game:
   `map<string, sf::Texture> textures;`

5. Load in images to be used in the game:
   ```
   textures["bunny"].loadFromFile( "GameAssets/bunny.png" );
   textures["diamond"].loadFromFile( "GameAssets/diamond.png" );
   textures["grass"].loadFromFile( "GameAssets/grass.png" )
   ```

   (If you want to customize the game art, feel free!)

6. Load in a font for the text:
   ```
   sf::Font font;
   font.loadFromFile( "GameAssets/PressStart2P.ttf" );
   ```

7. Create a player sprite and player variables. Usually you'd put these within a class, but we're just experimenting with SFML and not building a proper codebase.
   ```
   sf::Sprite player;`
   player.setTexture( textures["bunny"] );
   player.setPosition( SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 ); // Kind of the center of the screen
   float playerSpeed = 5;
   float playerScore = 0;
   ```

8. Create a sprite for the collectable item:
   ```
   sf::Sprite item;
   item.setTExture( textures["diamond"] );
   item.setPosition( GetRandomPosition( SCREEN_WIDTH, SCREEN_HEIGHT ) );
   ```

9. Create renderable text, which we will use to show the score:
   ```
   sf::Text scoreText;
   scoreText.setFont( font );
   scoreText.setCharacterSize( 30 );
   scoreText.setFillColor( sf::Color::White );
   scoreText.setString( "Score: " .. to_string( player_score ) );
   ```

10. Create a tiled background:
    ```
    vector<sf::Sprite> groundTiles;
    sf::Sprite ground;
    ground.setTexture( textures["grass"] );
    for ( int y = 0; y < SCREEN_HEIGHT; y += 32 )
    {
        for ( int x = 0; x < SCREEN_WIDTH; x += 32 )
        {
            ground.setPosition( x, y );
            groundTiles.push_back( ground );
        }
    }
    ```


### The game loop

After everything is initialized then the game loop begins. During the game loop, we check for user input, update the game state, and draw the sprites to the screen.

Start the game loop with:

```
while ( window.isOpen() )
{

}
```

Everything that follows goes within this game loop.


#### Listening for a window-close event

This code checks to see if the user closes the window, such as through the "X" button. This will trigger the game to exit.

```
sf::Event event;
while ( window.pollEvent( event ) )
{
    if ( event.type == sf::Event::Closed )
    {
        window.close();
    }
}
```


#### Listening for keyboard input

This code checks for keyboard key presses and adjusts the player's movement, updating it afterwards.

```
sf::Vector2f playerPos = player.getPosition();

if      ( sf::Keyboard::isKeyPressed( sf::Keyboard::Left )  { playerPos.x -= playerSpeed; }
else if ( sf::Keyboard::isKeyPressed( sf::Keyboard::Right ) { playerPos.x += playerSpeed; }

if      ( sf::Keyboard::isKeyPressed( sf::Keyboard::Up )    { playerPos.y -= playerSpeed; }
else if ( sf::Keyboard::isKeyPressed( sf::Keyboard::Down )  { playerPos.y += playerSpeed; }

player.setPosition( playerPos );
```


#### Check for collision between objects

We'll use the GetDistance function to check the distance (in pixels) between the player and the collectable item.
The sprites are each 32x32 pixels in dimension, so half is 16 pixels (the radius).
You can play around with the distance threshold as well to make things more or less forgiving.

```
if ( GetDistance( player.getPosition(), item.getPosition() ) <= 16 )
{
    // Move the collectable
    item.setPosition( GetRandomPosition( SCREEN_WIDTH, SCREEN_HEIGHT ) );
    playerScore++;
    scoreText.setString( "Score: " + to_string( playerScore ) );
}
```


#### Draw items to the screen

We'll draw the items to the screen here. The item drawn first will be below everything else, so if you want the player to step "on" the collectable, we need to draw the collectable *before* the player.

```
window.clear();

// Draw the background tiles
for ( auto& tile : groundTiles )
{
    window.draw( tile );
}

// Draw item
window.draw( item );

// Draw player
window.draw( player );

// Draw text
window.draw( scoreText );

// Draw everything to the screen
window.display();
```


## Testing the program

Build and run the program. You can use the arrow keys to move the player and collect the collectable (diamond). Each time you collect it, it should move to another position on the screen and your score should go up.

Feel free to customize it further, such as changing out the graphics, adding an NPC opponent, or an end-game state (game won when you collected the gem 5 times).

Make sure to take a screenshot to save in your repository directory for when you upload, just in case I have a hard time getting it to build on my own machine.
