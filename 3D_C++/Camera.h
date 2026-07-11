#pragma once
#include"DxLib.h"
#include"Player.h"
class Camera
{
private:

	int CameraX, CameraY;//マウス座標

	PlayerTransform::Pos playerPos;

public:
	void CameraUpdate();
};

