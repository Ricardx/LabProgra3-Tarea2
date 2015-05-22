#include "Enemigo1.h"

Enemigo1::Enemigo1(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    int w,h;
    textura = IMG_LoadTexture(renderer, "globo.png");
    SDL_QueryTexture(textura, NULL, NULL, &w, &h);
    rect_textura.x = 640;
    rect_textura.y = 50;
    rect_textura.w = w;
    rect_textura.h = h;

    textura_bala = IMG_LoadTexture(renderer, "bala1.png");
    SDL_QueryTexture(textura_bala, NULL, NULL, &w, &h);
    rect_bala.x = 0;
    rect_bala.y = 70;
    rect_bala.w = w;
    rect_bala.h = h;
}

void Enemigo1::dibujar()
{
    SDL_RenderCopy(renderer, textura, NULL, &rect_textura);
}

void Enemigo1::logica()
{
    rect_textura.x-=4;
    if(rect_textura.x==0)
    {
        rect_textura.x=640;
    }
}

Enemigo1::~Enemigo1()
{
    //dtor
}
