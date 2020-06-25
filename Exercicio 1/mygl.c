#include "mygl.h"

/* Definição das primitivas a serem desenhadas */
void MyGlDraw(void) {
  point p1, p2;
  line linha;

  p1.x = 200;
  p1.y = 400;
  p1.cor.c[0] = 255; // R
  p1.cor.c[1] = 255; // G
  p1.cor.c[2] = 255; // B
  p1.cor.c[3] = 255; // A
  putPixel(p1);

  p2.x = 100;
  p2.y = 100;
  p2.cor.c[0] = 255; // R
  p2.cor.c[1] = 255; // G
  p2.cor.c[2] = 255; // B
  p2.cor.c[3] = 255; // A
  putPixel(p2);

  linha.pontos[0] = p1;
  linha.pontos[1] = p2;

  drawLine(linha);
}

/* Plotando ponto na tela 
 * 
 * Parametro: ponto a ser desenhado
 * 
 * Return: altera a memoria de video para desenhar o ponto
*/
void putPixel(point ponto){
  int posicao = 4 * (ponto.x) + 4 * (ponto.y) * IMAGE_HEIGHT; // Calcula a posição do buffer de cor
  for (int i = 0; i < 4; i++)
  {
    fb_ptr[posicao + i] = ponto.cor.c[i];
    ;
  }
}

/* Plotando a linha na tela 
 * 
 * Parametro:
 * 
 * Return:
*/
void drawLine(line linha){
  bresenham(linha.pontos[0], linha.pontos[1]);
}

void bresenham(point p1, point p2){
  point desenho;
  int dx, dy, p, e, xy2, x, y; 
  
  dx = p2.x - p1.x;
  if(dx < 0) dx = -dx;
  dy = p2.y - p1.y;
  if(dy < 0) dy = -dy;

  
  if(dx >= dy){
    p = 2 * dy - dx;
    e = 2 * dy;
    xy2 = 2 * (dy-dx);
    if((p1.x < p2.x) && (p1.y < p2.y)){
      x = p1.x;
      y = p1.y;
      desenho = p1;
      putPixel(desenho);

      while(x < p2.x){
        x++;
        if(p<0) p +=e;
        else{
          y++;
          p += xy2;
        }
        desenho.x = x;
        desenho.y = y;
        putPixel(desenho);
      }
    }
    if((p1.x < p2.x) && (p1.y > p2.y)){
      x = p1.x;
      y = p1.y;
      desenho = p1;
      putPixel(desenho);

      while(x < p2.x){
        x++;
        if(p<0) p +=e;
        else{
          y--;
          p += xy2;
        }
        desenho.x = x;
        desenho.y = y;
        putPixel(desenho);
      }
    }
    if((p1.x > p2.x) && (p1.y < p2.y)){
      x = p2.x;
      y = p2.y;
      desenho = p2;
      putPixel(desenho);

      while(x < p1.x){
        x++;
        if(p<0) p +=e;
        else{
          y--;
          p += xy2;
        }
        desenho.x = x;
        desenho.y = y;
        putPixel(desenho);
      }
    }
    if((p1.x > p2.x) && (p1.y > p2.y)){
    x = p2.x;
    y = p2.y;
    desenho = p2;
    putPixel(desenho);

    while(x < p1.x){
      x++;
      if(p<0) p +=e;
      else{
        y++;
        p += xy2;
      }
      desenho.x = x;
      desenho.y = y;
      putPixel(desenho);
    }
  }
  }
  else{
    p = 2 * dx - dy;
    e = 2 * dx;
    xy2 = 2 * (dx-dy);
    if((p1.x < p2.x) && (p1.y < p2.y)){
      x = p1.x;
      y = p1.y;
      desenho = p1;
      putPixel(desenho);

      while(y < p2.y){
        y++;
        if(p<0) p +=e;
        else{
          x++;
          p += xy2;
        }
        desenho.x = x;
        desenho.y = y;
        putPixel(desenho);
      }
    }
    if((p1.x < p2.x) && (p1.y > p2.y)){
      x = p1.x;
      y = p1.y;
      desenho = p1;
      putPixel(desenho);

      while(y > p2.y){
        y--;
        if(p<0) p +=e;
        else{
          x++;
          p += xy2;
        }
        desenho.x = x;
        desenho.y = y;
        putPixel(desenho);
      }
    }
    if((p1.x > p2.x) && (p1.y < p2.y)){
      x = p2.x;
      y = p2.y;
      desenho = p2;
      putPixel(desenho);

      while(y > p1.y){
        y--;
        if(p<0) p +=e;
        else{
          x++;
          p += xy2;
        }
        desenho.x = x;
        desenho.y = y;
        putPixel(desenho);
      }
    }
    if((p1.x > p2.x) && (p1.y > p2.y)){
    x = p2.x;
    y = p2.y;
    desenho = p2;
    putPixel(desenho);

    while(y < p1.y){
      y++;
      if(p<0) p +=e;
      else{
        x++;
        p += xy2;
      }
      desenho.x = x;
      desenho.y = y;
      putPixel(desenho);
    }
  } 
  }

}