#include "Enemigo4.h"

Enemigo4::Enemigo4(SDL_Renderer* renderer)
{
    this->renderer = renderer;
    int w,h;
    textura = IMG_LoadTexture(renderer, "shurikens.png");
    SDL_QueryTexture(textura, NULL, NULL, &w, &h);
    rect_textura.x = 640;
    rect_textura.y = 0;
    rect_textura.w = w;
    rect_textura.h = h;

    textura_bala = IMG_LoadTexture(renderer, "bala4.png");
    SDL_QueryTexture(textura_bala, NULL, NULL, &w, &h);
    rect_bala.x = 100;
    rect_bala.y = 100;
    rect_bala.w = w;
    rect_bala.h = h;
}

void Enemigo4::dibujar()
{
    SDL_RenderCopy(renderer, textura, NULL, &rect_textura);
}

void Enemigo4::logica()
{
    rect_textura.x-=5;
    rect_textura.y+=5;

    if(rect_textura.y==480)
    {
    rect_textura.x = 640;
    rect_textura.y = 0;
    }
}

Enemigo4::~Enemigo4()
{
    //dtor
}
