#include "mygl.h"

/* Definição das primitivas a serem desenhadas */
void MyGlDraw(void) {
  point *p1 = 0;
  p1 -> x = 100;
  p1 -> y = 100;
  p1 -> cor -> c[0] = 255; // R
  p1 -> cor -> c[1] = 255; // G
  p1 -> cor -> c[2] = 255; // B
  p1 -> cor -> c[3] = 255; // A
  
  putPixel(p1);

}

/* Plotando pontos na tela */
void putPixel(point *ponto){
  int posicao = 4 * (ponto -> x) + 4 * (ponto -> y) * IMAGE_HEIGHT; // Calcula a posição do buffer de cor
  for (int i = 0; i < 4; i++)
  {
    fb_ptr[posicao + i] = ponto -> cor -> c[i];
  }
}
