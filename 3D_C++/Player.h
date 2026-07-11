#pragma once
#include"DxLib.h"
#include "InputManager.h"
namespace PlayerTransform
{
	struct Pos
	{
		float x, y, z;
	};

	struct  rotate
	{
		float x, y, z;
	};
}
class Player
{
private:
	float sp;//プレイヤーの速度
	float jp;//プレイヤーのジャンプパワー
	float gravity;//プレイヤーの重力
	float jumpVelocity;//向き

	bool isJump = true;//ジャンプ中かどうか
	
	

	PlayerTransform::Pos playerPos;

	InputManager input;

public:
	Player();
	void PlayerUpdate();
};

