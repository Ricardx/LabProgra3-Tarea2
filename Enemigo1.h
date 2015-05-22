#ifndef ENEMIGO1_H
#define ENEMIGO1_H

#include "Personaje.h"

class Enemigo1 : public Personaje
{
    public:
        SDL_Texture *textura, *textura_bala;
        SDL_Rect rect_textura, rect_bala;
        SDL_Renderer *renderer;

        void dibujar();
        void logica();

        Enemigo1(SDL_Renderer* renderer);
        virtual ~Enemigo1();
    protected:
    private:
};

#endif // ENEMIGO1_H
