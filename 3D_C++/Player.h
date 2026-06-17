#pragma once
#include"DxLib.h"
class Player
{
private:
	float sp;//プレイヤーの速度
	float jp;//プレイヤーのジャンプパワー
	float gravity;//プレイヤーの重力

	bool isJump = true;//ジャンプ中かどうか
	/// <summary>
	/// プレイヤーの座標
	/// </summary>
	struct Pos
	{
		float x, y, z;
	};

	Pos playerPos;

	/// <summary>
	/// カメラ座標
	/// </summary>
	VECTOR cameraPos;

public:
	Player();
	void PlayerEntry();
};

