#include "Player.h"

Player::Player()
{
	playerPos.x = 0;
	playerPos.y = 0;
	playerPos.z = 0;

	cameraPos = VGet(
		playerPos.x,
		playerPos.y + 150.0f,
		playerPos.z - 300.0f
	);

	sp = 5.0f;
	jp = 3.0f;
	gravity = 2.0f;

}

void Player::PlayerEntry()
{

	if (CheckHitKey(KEY_INPUT_W)) playerPos.z += sp;
	if (CheckHitKey(KEY_INPUT_S)) playerPos.z -= sp;
	if (CheckHitKey(KEY_INPUT_D)) playerPos.x += sp;
	if (CheckHitKey(KEY_INPUT_A)) playerPos.x -= sp;

	SetCameraPositionAndTarget_UpVecY(cameraPos, VGet(playerPos.x, playerPos.y, playerPos.z));
	DrawSphere3D(VGet(playerPos.x,playerPos.y,playerPos.z),50,32,GetColor(50,50,50),GetColor(30,30,30),TRUE);
	

}