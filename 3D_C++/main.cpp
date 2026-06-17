#define DX_NON_LITERAL_STRING
#include"DxLib.h"
#include<Windows.h>
#include<iostream>
using namespace std;

#include "Player.h"

const int WIDTH = 1920, HEIGHT = 1080;

Player pl;

void Start()
{
	
}
void MainGame()
{
	pl.PlayerEntry();//プレイヤーの描画、操作
}
void DrawGround()
{
	for (int z = -1000; z <= 1000; z += 100)
	{
		DrawLine3D(
			VGet(-1000.0f, 0.0f, (float)z),
			VGet(1000.0f, 0.0f, (float)z),
			GetColor(100, 100, 100)
		);
	}

	for (int x = -1000; x <= 1000; x += 100)
	{
		DrawLine3D(
			VGet((float)x, 0.0f, -1000.0f),
			VGet((float)x, 0.0f, 1000.0f),
			GetColor(100, 100, 100)
		);
	}
}

int APIENTRY WinMain(HINSTANCE hinstance,HINSTANCE hprevinstance,LPSTR lpcmdline,int ncmdshow)
{
	
	SetGraphMode(WIDTH, HEIGHT, 32);
	ChangeWindowMode(TRUE);

	if (DxLib_Init() == -1) return -1;
	SetBackgroundColor(64,64,64);
	SetDrawScreen(DX_SCREEN_BACK);

	SetUseZBuffer3D(TRUE);
	SetWriteZBuffer3D(TRUE);
	while (ProcessMessage() == 0)
	{
		ClearDrawScreen();
		//screeflipまでの間に基本処理を書く
		MainGame();
		DrawGround();
		DrawSphere3D(VGet(00.0f, 00.0f, 2000.0f), 100, 32, GetColor(0, 192, 255), GetColor(125, 255, 222), TRUE);
		
		

		ScreenFlip();
		WaitTimer(33);

		//終了処理
		if (ProcessMessage() == -1) break;
		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1) break;
	}

	DxLib_End();
	return 0;
}