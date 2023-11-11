#include <SFML\Graphics.hpp>
using namespace sf;
int main(){
RenderWindow window(VideoMode(1000,800),"main");
Texture texture;
texture.loadFromFile("bg.png");
Sprite sprite;
sprite.setTexture(texture);
bool run=true;
while (run){
Event event;
while (window.pollEvent(event)){
if (event.type==Event::Closed)window.close();
}
window.draw(sprite);
window.display();

}

}