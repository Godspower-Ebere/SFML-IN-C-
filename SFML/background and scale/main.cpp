#include <SFML\Graphics.hpp>
using namespace sf;
int main()
{
    RenderWindow screen(VideoMode(1000,800),"screen");

    Texture image;
    image.loadFromFile("bg.png");
    Sprite sprite;
    sprite.setTexture(image);
    sprite.setPosition(Vector2f(0,0));
    sprite.setScale(Vector2f(2.0,1.6));
    bool run=true;
    while (run){
        Event event;
        while(screen.pollEvent(event)){
            if (event.type==Event::Closed){
                run=false;
            }
            screen.draw(sprite);
            screen.display(); 
        }
    }
}