#include "mygl.h"

/* Definição das primitivas a serem desenhadas */
void MyGlDraw(void) {
  point p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16, p17;
  line l1, l2, l3, l4, l5, l6, l7, l8, l9, l10, l11, l12, l13, l14, l15, l16;
  triangle t1, t2, t3, t4;

  p1.x = 128;
  p1.y = 128;
  p1.cor.c[0] = 255; // R
  p1.cor.c[1] = 0; // G
  p1.cor.c[2] = 0; // B
  p1.cor.c[3] = 255; // A
  
  p2.x = 256;
  p2.y = 128;
  p2.cor.c[0] = 255; // R
  p2.cor.c[1] = 255; // G
  p2.cor.c[2] = 255; // B
  p2.cor.c[3] = 255; // A
  
  p3.x = 384;
  p3.y = 128;
  p3.cor.c[0] = 255; // R
  p3.cor.c[1] = 0; // G
  p3.cor.c[2] = 0; // B
  p3.cor.c[3] = 255; // A

  p4.x = 128;
  p4.y = 256;
  p4.cor.c[0] = 0; // R
  p4.cor.c[1] = 255; // G
  p4.cor.c[2] = 0; // B
  p4.cor.c[3] = 255; // A

  p5.x = 256;
  p5.y = 256;
  p5.cor.c[0] = 255; // R
  p5.cor.c[1] = 255; // G
  p5.cor.c[2] = 255; // B
  p5.cor.c[3] = 255; // A

  p6.x = 384;
  p6.y = 256;
  p6.cor.c[0] = 0; // R
  p6.cor.c[1] = 255; // G
  p6.cor.c[2] = 0; // B
  p6.cor.c[3] = 255; // A

  p7.x = 128;
  p7.y = 384;
  p7.cor.c[0] = 0; // R
  p7.cor.c[1] = 0; // G
  p7.cor.c[2] = 255; // B
  p7.cor.c[3] = 255; // A

  p8.x = 256;
  p8.y = 384;
  p8.cor.c[0] = 255; // R
  p8.cor.c[1] = 255; // G
  p8.cor.c[2] = 255; // B
  p8.cor.c[3] = 255; // A

  p9.x = 384;
  p9.y = 384;
  p9.cor.c[0] = 0; // R
  p9.cor.c[1] = 0; // G
  p9.cor.c[2] = 255; // B
  p9.cor.c[3] = 255; // A
  
  p10.x = 0;
  p10.y = 0;
  p10.cor.c[0] = 0; // R
  p10.cor.c[1] = 0; // G
  p10.cor.c[2] = 0; // B
  p10.cor.c[3] = 255; // A
  
  p11.x = 256;
  p11.y = 0;
  p11.cor.c[0] = 0; // R
  p11.cor.c[1] = 0; // G
  p11.cor.c[2] = 0; // B
  p11.cor.c[3] = 255; // A
  
  p12.x = 512;
  p12.y = 0;
  p12.cor.c[0] = 0; // R
  p12.cor.c[1] = 0; // G
  p12.cor.c[2] = 0; // B
  p12.cor.c[3] = 255; // A
  
  p13.x = 0;
  p13.y = 256;
  p13.cor.c[0] = 0; // R
  p13.cor.c[1] = 0; // G
  p13.cor.c[2] = 0; // B
  p13.cor.c[3] = 255; // A
  
  p14.x = 512;
  p14.y = 256;
  p14.cor.c[0] = 0; // R
  p14.cor.c[1] = 0; // G
  p14.cor.c[2] = 0; // B
  p14.cor.c[3] = 255; // A
  
  p15.x = 0;
  p15.y = 512;
  p15.cor.c[0] = 0; // R
  p15.cor.c[1] = 0; // G
  p15.cor.c[2] = 0; // B
  p15.cor.c[3] = 255; // A
  
  p16.x = 256;
  p16.y = 512;
  p16.cor.c[0] = 0; // R
  p16.cor.c[1] = 0; // G
  p16.cor.c[2] = 0; // B
  p16.cor.c[3] = 255; // A
  
  p17.x = 512;
  p17.y = 512;
  p17.cor.c[0] = 0; // R
  p17.cor.c[1] = 0; // G
  p17.cor.c[2] = 0; // B
  p17.cor.c[3] = 255; // A

  l1.pontos[0] = p10;
  l1.pontos[1] = p1;

  l2.pontos[0] = p1;
  l2.pontos[1] = p5;
  
  l3.pontos[0] = p5;
  l3.pontos[1] = p9;
  
  l4.pontos[0] = p9;
  l4.pontos[1] = p17;
  
  l5.pontos[0] = p11;
  l5.pontos[1] = p2;
  
  l6.pontos[0] = p2;
  l6.pontos[1] = p5;
  
  l7.pontos[0] = p5;
  l7.pontos[1] = p8;
  
  l8.pontos[0] = p8;
  l8.pontos[1] = p16;
  
  l9.pontos[0] = p12;
  l9.pontos[1] = p3;
  
  l10.pontos[0] = p3;
  l10.pontos[1] = p5;
  
  l11.pontos[0] = p5;
  l11.pontos[1] = p7;
  
  l12.pontos[0] = p7;
  l12.pontos[1] = p15;
  
  l13.pontos[0] = p13;
  l13.pontos[1] = p4;
  
  l14.pontos[0] = p4;
  l14.pontos[1] = p5;
  
  l15.pontos[0] = p5;
  l15.pontos[1] = p6;
  
  l16.pontos[0] = p6;
  l16.pontos[1] = p14;

  drawLine(l1);
  drawLine(l2);
  drawLine(l3);
  drawLine(l4);
  drawLine(l5);
  drawLine(l6);
  drawLine(l7);
  drawLine(l8);
  drawLine(l9);
  drawLine(l10);
  drawLine(l11);
  drawLine(l12);
  drawLine(l13);
  drawLine(l14);
  drawLine(l15);
  drawLine(l16);

  t1.pontos[0] = p2;
  t1.pontos[1] = p7;
  t1.pontos[2] = p6;

  t2.pontos[0] = p2;
  t2.pontos[1] = p4;
  t2.pontos[2] = p9;
  
  t3.pontos[0] = p3;
  t3.pontos[1] = p4;
  t3.pontos[2] = p8;

  t4.pontos[0] = p8;
  t4.pontos[1] = p6;
  t4.pontos[2] = p1;
  
  drawTriangle(t1);
  drawTriangle(t2);
  drawTriangle(t3);
  drawTriangle(t4);

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
    fb_ptr[posicao + i] = (int)(ponto.cor.c[i]);
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
  float dr, dg, db, da;
  
  dx = p2.x - p1.x;
  if(dx < 0) dx = -dx;
  dy = p2.y - p1.y;
  if(dy < 0) dy = -dy;
  if (dx >= dy){
    dr =  (p2.cor.c[0] - p1.cor.c[0])/(float)dx;
    dg =  (p2.cor.c[1] - p1.cor.c[1])/(float)dx;
    db =  (p2.cor.c[2] - p1.cor.c[2])/(float)dx;
    da =  (p2.cor.c[3] - p1.cor.c[3])/(float)dx;
  }
  else{
    dr =  (p2.cor.c[0] - p1.cor.c[0])/(float)dy;
    dg =  (p2.cor.c[1] - p1.cor.c[1])/(float)dy;
    db =  (p2.cor.c[2] - p1.cor.c[2])/(float)dy;
    da =  (p2.cor.c[3] - p1.cor.c[3])/(float)dy;
  }

  if (!dy){  
    
    if (p1.x < p2.x){
      x = p1.x;
      y = p1.y;
      desenho = p1;
      while(x < p2.x){
        x++;
        desenho.x = x;
        desenho.y = y;
        desenho.cor.c[0] += dr;
        desenho.cor.c[1] += dg;
        desenho.cor.c[2] += db;
        desenho.cor.c[3] += da;
        putPixel(desenho);
      }
    }
    if (p1.x > p2.x){
      x = p2.x;
      y = p2.y;
      desenho = p2;
      while(x < p1.x){
        x++;
        desenho.x = x;
        desenho.y = y;
        desenho.cor.c[0] -= dr;
        desenho.cor.c[1] -= dg;
        desenho.cor.c[2] -= db;
        desenho.cor.c[3] -= da;
        putPixel(desenho);
      }
    }
  }
  else if (!dx){    
    if (p1.y < p2.y){
      x = p1.x;
      y = p1.y;
      desenho = p1;
      while(y < p2.y){
        y++;
        desenho.x = x;
        desenho.y = y;
        desenho.cor.c[0] += dr;
        desenho.cor.c[1] += dg;
        desenho.cor.c[2] += db;
        desenho.cor.c[3] += da;
        putPixel(desenho);
      }
    }
    if (p1.y > p2.y){
      x = p2.x;
      y = p2.y;
      desenho = p2;
      while(y < p1.y){
        y++;
        desenho.x = x;
        desenho.y = y;
        desenho.cor.c[0] -= dr;
        desenho.cor.c[1] -= dg;
        desenho.cor.c[2] -= db;
        desenho.cor.c[3] -= da;
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
        desenho.cor.c[0] += dr;
        desenho.cor.c[1] += dg;
        desenho.cor.c[2] += db;
        desenho.cor.c[3] += da;
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
        desenho.cor.c[0] += dr;
        desenho.cor.c[1] += dg;
        desenho.cor.c[2] += db;
        desenho.cor.c[3] += da;
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
        desenho.cor.c[0] -= dr;
        desenho.cor.c[1] -= dg;
        desenho.cor.c[2] -= db;
        desenho.cor.c[3] -= da;
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
        desenho.cor.c[0] -= dr;
        desenho.cor.c[1] -= dg;
        desenho.cor.c[2] -= db;
        desenho.cor.c[3] -= da;
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
        desenho.cor.c[0] += dr;
        desenho.cor.c[1] += dg;
        desenho.cor.c[2] += db;
        desenho.cor.c[3] += da;
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
        desenho.cor.c[0] += dr;
        desenho.cor.c[1] += dg;
        desenho.cor.c[2] += db;
        desenho.cor.c[3] += da;
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
        desenho.cor.c[0] -= dr;
        desenho.cor.c[1] -= dg;
        desenho.cor.c[2] -= db;
        desenho.cor.c[3] -= da;
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
        desenho.cor.c[0] -= dr;
        desenho.cor.c[1] -= dg;
        desenho.cor.c[2] -= db;
        desenho.cor.c[3] -= da;
        putPixel(desenho);
      }
    } 
  }
}