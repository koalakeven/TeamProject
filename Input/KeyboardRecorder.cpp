#include "KeyboardRecorder.h"
//TEST PURPOSES
#include <iostream>

//TEST CHANGE
void KeyboardRecorder::fillInputs()
{
	for (int key : keysToListen) {
		if (keyboard->keyTriggered(static_cast<KeyboardKeys>(key))) {
			currentInputs.push_back(KeyState(state::TRIGGERED,key));
			std::cout << key;
		}
		else if (keyboard->keyHeld(static_cast<KeyboardKeys>(key))) {
			currentInputs.push_back(KeyState(state::HELD, key));
			std::cout << key;
		}
	}

}

