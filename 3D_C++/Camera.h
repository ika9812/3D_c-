#pragma once
#include"DxLib.h"
#include"Player.h"
class Camera
{
private:
	/// <summary>
	/// カメラ座標
	/// </summary>
	VECTOR cameraPos;

	int CameraX, CameraY;//マウス座標

	PlayerTransform::Pos playerPos;

public:
	void CameraUpdate();
};

