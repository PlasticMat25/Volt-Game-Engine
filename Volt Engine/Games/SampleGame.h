#pragma once

#include "../Source/Headers/VoltEngine.h"

Button myBtn(100, 50, "Click");

void Start(StartArg) {
	myBtn.SetPosition(300, 225);
}

void EventUpdate(EventArg) {

	if (input.GetKeyDown(evt, Key::Space)) {
		print("SpaceBar is Pressed");
	}

	if (myBtn.Clicked()) {
		print("Button is Clicked");
	}
}

void Update(UpdateArg) {
	Set_Background_Color(window,20, 51, 100);

	myBtn.DrawAt(window);
}