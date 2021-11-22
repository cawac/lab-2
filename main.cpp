#include "Clothes.h"
#include <SFML/Graphics.hpp>
int main()
{
    clothes::Shirt shirt;
    shirt.button();
    shirt.button();
    shirt.unbutton();
    shirt.unbutton();
    clothes::Hoodie hoodie;
    hoodie.tie_a_lace();
    hoodie.put_on_a_hood();
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }
    return 0;
}