#include "Camera.h"
void Camera::CameraUpdate()
{
	GetMousePoint(&CameraX, &CameraY);

	cameraPos = VGet(
		playerPos.x,
		playerPos.y + 50.0f,
		playerPos.z - 300.0f
	);
	SetCameraPositionAndTarget_UpVecY(cameraPos, VGet(playerPos.x, playerPos.y, playerPos.z));
}