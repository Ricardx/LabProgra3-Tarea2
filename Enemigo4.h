#ifndef ENEMIGO4_H
#define ENEMIGO4_H

#include "Personaje.h"

class Enemigo4 : public Personaje
{
    public:
        SDL_Texture *textura, *textura_bala;
        SDL_Rect rect_textura, rect_bala;
        SDL_Renderer *renderer;

        void dibujar();
        void logica();

        Enemigo4(SDL_Renderer* renderer);
        virtual ~Enemigo4();
    protected:
    private:
};

#endif // ENEMIGO4_H
