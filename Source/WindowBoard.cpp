#include "WindowBoard.h"
#include <SFML\Graphics.hpp>


WindowBoard::WindowBoard()
{

}

void WindowBoard::appear()
{
    sf::RenderWindow window(sf::VideoMode(700, 700), "Sudoku - Prevot Alexandre");
    sf::CircleShape shape(50.f);
    shape.setFillColor(sf::Color::Green);


    //-----dessin du tableau
    sf::RectangleShape rectangle(sf::Vector2f(450, 450));
    rectangle.setFillColor(sf::Color::White);

    rectangle.setPosition(window.getSize().x / 2 - rectangle.getSize().x / 2,
        window.getSize().y / 2 - rectangle.getSize().y / 2);


    //-----dessin du tableau


    while (window.isOpen())
    {

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();


        }

        sf::Vector2i pos = sf::Mouse::getPosition(window);



        window.clear();
        window.draw(rectangle);
        shape.setPosition(pos.x, pos.y);
        window.draw(shape);
        for (int i = 0; i < 81; i++)
        {
            sf::CircleShape square(25, 4);
            square.rotate(45);
            square.setFillColor(sf::Color(120, 20, 20));

            square.setPosition(rectangle.getPosition().x + i * 37 % (9 * 37),
                (rectangle.getPosition().y + floor(i / 9) * 37));
            window.draw(square);

        }
        window.display();



        //std::cout <<  pos.x << std::endl;
    }
}