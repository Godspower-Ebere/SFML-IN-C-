#include <SFML\Graphics.hpp>
#include <vector>
#include <iostream>
using namespace sf;
using namespace std;

int main(){
	int width,height;
	float x,y,vel;
	vector<float> ypos;
	width=1000;
	height=800;
	RenderWindow screen(VideoMode(width,height),"screen");
	screen.setFramerateLimit(60);
	Color white,red,pink;
	white=Color(255,255,255);
	pink=Color(255,0,255);
	red=Color(255,0,0);

	RectangleShape box;
	x=width/2;
	y=height-100;
	vel=20;
	box.setFillColor(white);
	box.setSize(Vector2f(50,100));
	screen.setKeyRepeatEnabled(false);
	bool run=true;
	bool jump=false;
	while (run){
		screen.clear(pink);
		Event event;
		while(screen.pollEvent(event)){
			if (event.type==Event::Closed)run=false;
			if (event.type==Event::KeyPressed){
				if (event.key.code==Keyboard::Space){
					jump=true;
				}
			};
		}
		
	
		if (jump==true){
			ypos.push_back(y);
			y-=vel;
			vel-=0.5;
			if (vel<=-20){
				vel=20;
				y=ypos[0];
				jump=false;
			}
		}
		box.setPosition(x,y);
		screen.draw(box);
		screen.display();	
	}
}

