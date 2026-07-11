#include "Player.h"


Player::Player()
{
	playerPos.x = 0;
	playerPos.y = 50.0f;
	playerPos.z = 0;

	jumpVelocity = 0.0f;	

	sp = 5.0f;
	jp = 25.0f;
	gravity = 3.0f;

}
void Player::PlayerUpdate()
{
	

	input.Update();

	if (input.Press(KEY_INPUT_W)) playerPos.z += sp;
	if (input.Press(KEY_INPUT_S)) playerPos.z -= sp;
	if (input.Press(KEY_INPUT_D)) playerPos.x += sp;
	if (input.Press(KEY_INPUT_A)) playerPos.x -= sp;
	if (input.Trigger(KEY_INPUT_SPACE) && isJump)
	{
		jumpVelocity = 40.0f;
		isJump = false;
	}
	jumpVelocity -= gravity;
	playerPos.y += jumpVelocity;

	
	DrawSphere3D(VGet(playerPos.x,playerPos.y,playerPos.z),50,32,GetColor(50,50,50),GetColor(30,30,30),TRUE);
	
	if (playerPos.y <= 50.0f)
	{
		playerPos.y = 50.0f;
		jumpVelocity = 0.0f;
		isJump = true;
	}
	

}