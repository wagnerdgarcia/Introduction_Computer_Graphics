#ifndef MYGL_H
#define MYGL_H

#include "core.h"
#include "frame_buffer.h"

/*Struct que define a Cor*/
typedef struct color
{
  int c[4];
}color;

/*Struct que define o Ponto*/
typedef struct point
{
  int x, y;
  color cor;
}point;

/*Struct que define a Linha*/
typedef struct line
{
  point pontos[2];
}line;

/*Struct que define o Triangulo*/
typedef struct triangle
{
  point pontos[3];
}triangle;

void MyGlDraw(void);

void putPixel(point);
void drawLine(line);
void drawTriangle(triangle);

#endif  // MYGL_H
