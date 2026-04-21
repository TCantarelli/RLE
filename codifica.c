#include "trabalho1.h"
void codificaStreamImagem()
{
  unsigned int pixel, proximo,contador = 1, bloco;

  pixel = pegaProximoPixel ();
  while(pixel !=0xFFFFFFFF)
  {
      proximo = pegaProximoPixel();
      if (pixel == proximo && contador <255)
      {
          contador++;
      }
      else
      {
        bloco = (contador *  16777216) + pixel;
        enviaBlocoRLE (bloco);
        contador = 1;
      }
        pixel = proximo;
  }

}
