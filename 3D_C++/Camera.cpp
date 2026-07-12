#include "Camera.h"
void Camera::Update()
{
	GetMousePoint(&CameraX, &CameraY);

	cameraYaw += CameraX * rotatesp;

	cameraPitch -= CameraY * rotatesp;







	//SetCameraPositionAndTarget_UpVecY(0, VGet(playerPos.x, playerPos.y, playerPos.z));
}