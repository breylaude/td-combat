# TD Combat Game

Install `SDL_image` library

Debian

`sudo apt-get install libsdl-image1.2-dev`

Add `"-lSDL_image"` to the compilation line

In case you're using Windows, then you should first install `sdl_image` 

`apt-get install libsdl2-image-dev` and then 

`#include <SDL_image.h>` not `#include <SDL/SDL_image.h>`

Install SDL2

`sudo apt-get install libsdl2-dev`

For the header:

`#include <SDL2/SDL.h>`

Additionally, you may also want to install:

