# Exercicio 1 - Introdução a Computação Grafica (ICG)

## Respositorio do primeiro Exercício de ICG

### Centro de Informatica - Universidade Federal da Paraiba
- Disciplina: Introdução a Computação Grafica
- Discente: Wagner Dantas Garcia - wagnergarcia@cc.ci.ufpb.br
- Data de Criacao: 24/06/2020

## Introdução

A ideia desse projeto é introduzir os alunos aos conceitos de introdução a computação grafica, ministrada pelo Prof. Dr. Christian Azambuja Pagot. Onde foi desenvolvida a rasterização de pontos, linhas e triangulos, onde foi utilizada a biblioteca grafica OpenGL Para isso foi utilizado uma base de codigo do Prof. Dr. Christian Azambuja Pagot, onde o codigo emulava a criação de uma memoria de video.

## Desenvolvimento

  O projeto foi dividido em três partes importantes, sendo elas o desenvolvimentos das principais funções, putPixel(), DrawLine() e DrawTriangle(); para isso foram criados duas estruturas para auxiliar no desenvolvimento do programa e assim ficar mais facil e pratico o desenvolvimento sendo elas a color e a point.

### Color

  A color tinha a função de agrupar os elementos de uma cor em um vetor de 4 unidades, `color[4]`, onde o primeiro elemento do vetor[0] seria resevado para a cor vermelha (Red), o Segundo elemento do vetor[1] a cor verde (Green), o terceiro elemento do vetor[2] a cor azul (Blue), e por fim no ultimo elemento do vetor[3] será armazenado o valor da cor alfa.

  ``` 
  color.c = {R,G,B,A}
  ```

  
### Point

  A estrutura point ele irá armazenar dois valores inteiros para guardar a posição do ponto no espaço, um deles irá armazenar o valor da posição X e o outro da posição Y, além disso teremos uma estrutura color dentro dela que irá armazenar a cor do ponto.

``` 
x = inteiro
y = inteito
cor = color
```

### putPixel()

Foi desenvolvido uma função chamada putPixel() onde sua principal função era desenhar pontos na tela. onde ela irá receber como parametros um `point`e a saida seria desenhar na tela um ponto naquela cordenada e cor.

Sabemos que na memoria a informação de um pixel é armazenada em 4 bytes, onde o primeiro é destinado a cor vermelha, o segundo a cor verde, o terceiro a cor azul e o ultimo ao alfa. Temos que um pixel é seguido do outro na memoria assim eles são armazenados sequencialmente.

Então para calcularmos a posição de um pixel prescisamos de suas cordenadas. Através das coordenadas do pixel calularemos a sua posição na memoria, como cada ponto ocupa 4 bytes então pegaremos a posição X do pixel e multiplicaremos por 4 e para a posição Y será calculada por sua posição vezes 4 vezes a largura da tela. dessa forma encontraremos a primeira posição na memoria para aquele pixel, para encontrarmos as outras 3 prescisamos somar só mais um byte para cada cor. 
``` 
posição R = 4 * PosiçãoX + 4 * LarguraDaTela * PosiçãoY
posição G = 4 * PosiçãoX + 4 * LarguraDaTela * PosiçãoY + 1
posição B = 4 * PosiçãoX + 4 * LarguraDaTela * PosiçãoY + 2
posição A = 4 * PosiçãoX + 4 * LarguraDaTela * PosiçãoY + 3
```
Assim que encontramos as posições de cada cor para aquele ponto armazenamos na memoria o valor correspondente a cada cor, para assim que o programa for execultado ele possa desenhar na tela a cor correspondente a cada pixel.

![](Imagens/Pontos.png?w=368)

### drawLine()

