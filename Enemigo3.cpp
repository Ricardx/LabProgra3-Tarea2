#include "Enemigo3.h"

Enemigo3::Enemigo3(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    int w,h;
    textura = IMG_LoadTexture(renderer, "coc.png");
    SDL_QueryTexture(textura, NULL, NULL, &w, &h);
    rect_textura.x = 0;
    rect_textura.y = 0;
    rect_textura.w = w;
    rect_textura.h = h;

    textura_bala = IMG_LoadTexture(renderer, "bala3.png");
    SDL_QueryTexture(textura_bala, NULL, NULL, &w, &h);
    rect_bala.x = 100;
    rect_bala.y = 15;
    rect_bala.w = w;
    rect_bala.h = h;
}

void Enemigo3::dibujar()
{
    SDL_RenderCopy(renderer, textura, NULL, &rect_textura);
}

void Enemigo3::logica()
{
    rect_textura.x+=3;
    rect_textura.y+=3;

    if(rect_textura.y==480)
    {
        rect_textura.x=0;
        rect_textura.y=0;
    }
}

Enemigo3::~Enemigo3()
{
    //dtor
}
