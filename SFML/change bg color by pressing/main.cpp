#include <SFML\Graphics.hpp>
#include <iostream>
using namespace sf;
int main(){
	int w=1000;
	int h=800;
	RenderWindow screen(VideoMode(w,h),"screen");
	Color pink, white, red , green , blue, yellow,black,cyan,color;
	pink=Color(255,0,255);
	white=Color(255,255,255);
	red=Color(255,0,0);
	green=Color(0,255,0);
	blue=Color(0,0,255);
	yellow=Color(255,255,0);
	black=Color(0,0,0);
	cyan=Color(0,255,255);
	color=black;
	RectangleShape shape;
	shape.setSize(Vector2f(100,100));
	int x,y;
	x=w/2;
	y=h-100;
	shape.setPosition(Vector2f(x,y));
	shape.setFillColor(pink);
	Vector2f size=Vector2f(w/2,h/2);
	Font font;
	font.loadFromFile("arial.ttf");
	Text text("hello world",font,100);
	text.setPosition(Vector2f(100,100));
	bool run=true;
	while (run){
		Event event;
		while (screen.pollEvent(event)){
			if (event.type==Event::Closed){
				run=false;
			}
		}
		if (Keyboard::isKeyPressed(Keyboard::Q))run=false;
		if (Keyboard::isKeyPressed(Keyboard::P))color=pink;
		if (Keyboard::isKeyPressed(Keyboard::W))color=white;
		if (Keyboard::isKeyPressed(Keyboard::R))color=red;
		if (Keyboard::isKeyPressed(Keyboard::G))color=green;
		if (Keyboard::isKeyPressed(Keyboard::B))color=blue;
		if (Keyboard::isKeyPressed(Keyboard::D))color=black;
		if (Keyboard::isKeyPressed(Keyboard::Y))color=yellow;
		if (Keyboard::isKeyPressed(Keyboard::C))color=cyan;

		screen.clear(color);
		screen.draw(shape);
		screen.draw(text);
		screen.display();
	}
}
