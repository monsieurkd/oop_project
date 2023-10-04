#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>


int main()
{
    //the window
    sf::RenderWindow window(sf::VideoMode(640, 480), "chess game", sf::Style::Titlebar | sf::Style::Close);
    
    //the circle
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    //an event
    sf::Event event;
    
    //game loop
    while (window.isOpen())
    {
        
        while (window.pollEvent(event))
        {
            switch (event.type)
            {
            case sf::Event::Closed:
                window.close();
                break;
            
            case sf::Keyboard::Escape:
                window.close();
                break;
            }
            
        }

        window.clear();//clear the last frame
        window.draw(shape);//draw a shape
        window.display();//window done drawing
    }

    return 0;
}