#ifndef Game_hpp
#define Game_hpp

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

class Game {
public:
  Game();
  ~Game();

  void init(const char* title, int width, int height, bool fullscreen);

  void handleEvents();
  void update();
  bool running() { return isRunning; }
  void render();
  void clean();

private:
  bool isRunning = false;
  float cnt = 0;
  SDL_Window *window;
  SDL_Renderer *renderer;
};

#endif /* Game_hpp */