// MIT License
// Copyright (c) 2026 Yair Inbar

#include <App.h>

int main(int argc, char argv[]) {
	Start();

	while (running) {
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_EVENT_QUIT) {
				running = false;
			}

			Event();
		}

		SDL_RenderClear(renderer);

		Update();		

		SDL_RenderPresent(renderer);
	}

	Finish();
}

