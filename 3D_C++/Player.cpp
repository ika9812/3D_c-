#include "Player.h"
#include "InputManager.h"

Player::Player()
{
	playerPos.x = 0;
	playerPos.y = 50.0f;
	playerPos.z = 0;

	cameraPos = VGet(
		playerPos.x,
		playerPos.y + 150.0f,
		playerPos.z - 300.0f
	);

	sp = 5.0f;
	jp = 100.0f;
	gravity = 7.0f;

}
InputManager playerinput;
void Player::PlayerEntry()
{
	

	playerinput.Update();

	if (playerinput.Press(KEY_INPUT_W)) playerPos.z += sp;
	if (playerinput.Press(KEY_INPUT_S)) playerPos.z -= sp;
	if (playerinput.Press(KEY_INPUT_D)) playerPos.x += sp;
	if (playerinput.Press(KEY_INPUT_A)) playerPos.x -= sp;
	if (playerinput.Trigger(KEY_INPUT_SPACE) && isJump)
	{
		playerPos.y += jp;
		isJump = false;
	}


	SetCameraPositionAndTarget_UpVecY(VGet(playerPos.x, playerPos.y, playerPos.z-300), VGet(playerPos.x,playerPos.y,playerPos.z));
	DrawSphere3D(VGet(playerPos.x,playerPos.y,playerPos.z),50,32,GetColor(50,50,50),GetColor(30,30,30),TRUE);
	
	if (playerPos.y >= 50)
	{
		playerPos.y -= gravity;
	}
	else
	{
		isJump = true;
	}

}