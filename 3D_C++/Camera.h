#pragma once
#include"DxLib.h"
#include"Player.h"
class Camera
{
private:

	int CameraX, CameraY;//マウス座標

	float cameraYaw = 0.0f;
	float cameraPitch = 0.0f;
	float cameraDistance = 200.0f;

	float rotatesp;//回転速度

	struct Offset
	{
		float x, y, z;
	};

	Offset offset;

	PlayerTransform::Pos playerPos;

public:
	void Update();
};

