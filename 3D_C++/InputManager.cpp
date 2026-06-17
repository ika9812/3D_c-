#include "InputManager.h"
#include <cstring>

InputManager::InputManager()
{
	memset(nowkey, 0, sizeof(nowkey));
	memset(oldkey, 0, sizeof(oldkey));
}

void InputManager::Update()
{
	memcpy(oldkey, nowkey, 256);

	GetHitKeyStateAll(nowkey);
}

bool InputManager::Press(int key)
{
	return nowkey[key];
}

bool InputManager::Trigger(int key)
{
	return nowkey[key] && !oldkey[key];
}

bool InputManager::Release(int key)
{
	return !nowkey[key] && oldkey[key];
}

