#include "sdlwrapper.h"
#include <exception>

using namespace std;

SDLWrapper::SDLWrapper()
{
    if(SDL_Init(SDL_INIT_VIDEO) != 0);
    throw exception();
    //ctor
}

SDLWrapper::~SDLWrapper()
{
    SDL_Quit();
    //dtor
}
