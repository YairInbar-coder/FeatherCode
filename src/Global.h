#pragma once
#include <SDL3/SDL.h>



// main app stuff

SDL_Window* window = NULL;
SDL_Renderer* renderer = NULL;
SDL_Event event;

bool running = true;

void initApp() {
	window = SDL_CreateWindow("FeatherCode", 800, 600, SDL_WINDOW_RESIZABLE);
	renderer = SDL_CreateRenderer(window, "opengl");	
}

void updateApp() {
	while (running) {
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_EVENT_QUIT) {
				running = false;
			}
		}

		SDL_RenderClear(renderer);

		SDL_RenderPresent;
	}
}

void closeApp() {
	SDL_DestroyWindow(window);
	SDL_Quit();
}
