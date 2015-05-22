#include "Enemigo2.h"

Enemigo2::Enemigo2(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    int w,h;
    textura = IMG_LoadTexture(renderer, "fant.png");
    SDL_QueryTexture(textura, NULL, NULL, &w, &h);
    rect_textura.x = 320;
    rect_textura.y = 480;
    rect_textura.w = w;
    rect_textura.h = h;

    textura_bala = IMG_LoadTexture(renderer, "bala2.png");
    SDL_QueryTexture(textura_bala, NULL, NULL, &w, &h);
    rect_bala.x = 30;
    rect_bala.y = 65;
    rect_bala.w = w;
    rect_bala.h = h;
}

void Enemigo2::dibujar()
{
    SDL_RenderCopy(renderer, textura, NULL, &rect_textura);
}

void Enemigo2::logica()
{
    rect_textura.y-=2;
    if(rect_textura.y==0)
    {
        rect_textura.y=480;

    }
}


Enemigo2::~Enemigo2()
{
    //dtor
}
