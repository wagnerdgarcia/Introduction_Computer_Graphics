#include "mygl.h"

/* Definição das primitivas a serem desenhadas */
void MyGlDraw(void) {
  point p1, p2, p3;
  triangle triangulo;

  p1.x = 100;
  p1.y = 100;
  p1.cor.c[0] = 0; // R
  p1.cor.c[1] = 0; // G
  p1.cor.c[2] = 255; // B
  p1.cor.c[3] = 255; // A
  
  //p2.x = 200;
  //p2.y = 400;
  p2.x = 100;
  p2.y = 400;
  p2.cor.c[0] = 0; // R
  p2.cor.c[1] = 255; // G
  p2.cor.c[2] = 0; // B
  p2.cor.c[3] = 255; // A
  
  //p3.x = 409;
  //p3.y = 163;
  p3.x = 400;
  p3.y = 100;
  p3.cor.c[0] = 255; // R
  p3.cor.c[1] = 0; // G
  p3.cor.c[2] = 0; // B
  p3.cor.c[3] = 255; // A
  
  triangulo.pontos[0] = p1;
  triangulo.pontos[1] = p2;
  triangulo.pontos[2] = p3;

  drawTriangle(triangulo);
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
 * Parametro: Passa a linha a ser desenhada
 * 
 * Return: Desenha a linha
*/
void drawLine(line linha){
  bresenham(linha.pontos[0], linha.pontos[1]);
}

/* Plotando a linha na tela 
 * 
 * Parametro: Passa o triangulo a ser desenhado
 * 
 * Return: Desenha o triangulo
*/
void drawTriangle(triangle trinagulo){
  line linha1, linha2, linha3;
  linha1.pontos[0] = trinagulo.pontos[0];
  linha1.pontos[1] = trinagulo.pontos[1];
  linha2.pontos[0] = trinagulo.pontos[1];
  linha2.pontos[1] = trinagulo.pontos[2];
  linha3.pontos[0] = trinagulo.pontos[0];
  linha3.pontos[1] = trinagulo.pontos[2];
  
  drawLine(linha1);
  drawLine(linha2);
  drawLine(linha3);
}

void bresenham(point p1, point p2){
  point desenho;
  int dx, dy, p, e, xy2, x, y; 
  
  dx = p2.x - p1.x;
  if(dx < 0) dx = -dx;
  dy = p2.y - p1.y;
  if(dy < 0) dy = -dy;

  if (!dy)
  {
    if (p1.x < p2.x){
      x = p1.x;
      y = p1.y;
      desenho = p1;
      while(x < p2.x){
        x++;
        desenho.x = x;
        desenho.y = y;
        putPixel(desenho);
      }
    }
    if (p1.x > p2.x){
      x = p1.x;
      y = p1.y;
      desenho = p2;
      while(x < p1.x){
        x++;
        desenho.x = x;
        desenho.y = y;
        putPixel(desenho);
      }
    }
  }
  else if (!dx)
  {
    if (p1.y < p2.y){
      x = p1.x;
      y = p1.y;
      desenho = p1;
      while(y < p2.y){
        y++;
        desenho.x = x;
        desenho.y = y;
        putPixel(desenho);
      }
    }
    if (p1.y > p2.y){
      x = p1.x;
      y = p1.y;
      desenho = p2;
      while(y < p1.y){
        y++;
        desenho.x = x;
        desenho.y = y;
        putPixel(desenho);
      }
    }
  }
  else if(dx >= dy){
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
    
    else if((p1.x < p2.x) && (p1.y > p2.y)){
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