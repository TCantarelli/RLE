#include "trabalho1.h"
void decodificaStreamRLE ()
{
    unsigned int contador, pixel, bloco, cor;
    bloco = pegaProximoBlocoRLE ();

    while(bloco != 0)
    {
        // separa a cor e o valor do contador dividindo por 2^24 e resto por 2^24
        contador = bloco/16777216;
        cor = bloco % 16777216;

        //Repete e manda a cor quantas vezes o contador definir
        for(int i = 0; i< (int)contador; i++)
        {
            enviaPixel(cor);
        }
        bloco = pegaProximoBlocoRLE ();
    }
}
