#pragma once

// Included Libraries
#include <iostream>
#include "sdl/SDL.h"
#include "SDL_image.h"
#include "math.h"

const int TOTAL_PARTICLES = 5;

// Function Prototypes
void Input();
void Text(char* tText, int x, int y);
void CheckTime();
void DrawLine(int x1, int y1, int x2, int y2);
void ExitButton();
void AmmoDisplay();
void DrawGUI();

class Player
{
	public:
	Player();
	void Movement(bool u, bool d, bool r, bool l, SDL_Surface* dest);
	SDL_Rect playerRec;
	
	SDL_Surface* TextureSet();
	
	void SetSurfaces();
	SDL_Surface* down = NULL;
	SDL_Surface* up = NULL;
	SDL_Surface* right = NULL;
	SDL_Surface* left = NULL;
	SDL_Surface* upLeft = NULL;
	SDL_Surface* upRight = NULL;
	SDL_Surface* downRight = NULL;
	SDL_Surface* downLeft = NULL;
};

class Timer
{
	private:
		int startTicks;
		int pauseTicks;
		bool paused;
		bool started;
		
	public:
		Timer();
		void start();
		void stop();
		void pause();
		void unpause();
		int getTicks();
		bool isStarted();
		bool isPaused();	
};

class Enemy
{
	public:
		int iHealth;
		
		SDL_Rect area;
		SDL_Rect health;
		SDL_Surface* texture;
		
		void Setup(int x, int y, char* image);
		void Update();
};

class Bullet
{
	int x, y;
	int count;
	int countMax;
	SDL_Surface* bullet;
	SDL_Rect bulRec;
	public:
		Bullet(int dX, int dY);
		~Bullet();
		void update();
		
		bool Dest;
};
