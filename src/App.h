// MIT License
// Copyright (c) 2026 Yair Inbar

#pragma once
#include <SDL3/SDL.h>
#include <SDL3_ttf/SDL_ttf.h>

// main app stuff

SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;
SDL_Event event;
bool running = true;
TTF_Font* font = TTF_OpenFont()

// first frame
void Start() {
	TTF_Init()
	window = SDL_CreateWindow("FeatherCode", 800, 600, SDL_WINDOW_RESIZABLE);
	renderer = SDL_CreateRenderer(window, "opengl");	
}

// every frame
void Update() {
	
}

// the events every frame
void Event() {

}

// last frame
void Finish() {
	SDL_DestroyWindow(window);
	SDL_Quit();
}
