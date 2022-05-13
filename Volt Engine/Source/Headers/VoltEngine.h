#pragma once

#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <math.h>
#include <iostream>
#include <Windows.h>

#include "Button.h"
#include "Text.h"
#include "SoundClass.h"
#include "Input.h"
#include "GameObject.h"

// pre declared functions
void Start(sf::RenderWindow& window);
void Update(sf::RenderWindow& window, float delta_time);
void EventUpdate(sf::Event& event, float delta_time);

// engine macros
#define print(x) std::cout<<x<<std::endl;

#define OnKeyUp(sf_event) sf_event.type==sf::Event::KeyReleased
#define OnKeyDown(sf_event) sf_event.type==sf::Event::KeyPressed
#define PressedKey sf::Keyboard::isKeyPressed
#define Key sf::Keyboard

#define StartArg sf::RenderWindow& window
#define EventArg sf::Event& evt, float delta_time
#define UpdateArg sf::RenderWindow& window, float delta_time

// engine functions

void Set_Background_Color(sf::RenderWindow& window, int red, int green, int blue) {
	window.clear(sf::Color(red, green, blue));
}

float Distance_Between(float object1X, float object1Y, float object2X, float object2Y) {

	float distance = sqrtf(powf(object1X - object2X, 2) + powf(object1Y - object2Y, 2));

	return distance;
}

class console {
public:
	void Hide() {
		ShowWindow(GetConsoleWindow(), SW_HIDE);
	}
	void Show() {
		ShowWindow(GetConsoleWindow(), SW_SHOW);
	}
};


console Console;
input Input;
