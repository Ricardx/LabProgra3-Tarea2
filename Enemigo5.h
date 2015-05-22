#ifndef ENEMIGO5_H
#define ENEMIGO5_H

#include "Personaje.h"

class Enemigo5 : public Personaje
{
    public:
        SDL_Texture *textura, *textura_bala;
        SDL_Rect rect_textura, rect_bala;
        SDL_Renderer *renderer;

        void dibujar();
        void logica();

        Enemigo5(SDL_Renderer* renderer);
        virtual ~Enemigo5();
    protected:
    private:
};

#endif // ENEMIGO5_H
