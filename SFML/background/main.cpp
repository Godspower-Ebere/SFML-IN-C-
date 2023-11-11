#include <SFML\Graphics.hpp>
using namespace sf;
int main(){
RenderWindow window(VideoMode(1000,800),"main");
Texture texture;
texture.loadFromFile("bg.png");
Sprite sprite;
sprite.setTexture(texture);
sprite.setScale(Vector2f(2.5,2.5));
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