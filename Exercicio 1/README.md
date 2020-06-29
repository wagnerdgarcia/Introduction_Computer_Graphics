# Exercicio 1 - Introdução a Computação Grafica (ICG)

## Respositorio do primeiro Exercício de ICG

### Centro de Informatica - Universidade Federal da Paraiba
- Disciplina: Introdução a Computação Grafica
- Discente: Wagner Dantas Garcia - wagnergarcia@cc.ci.ufpb.br
- Data de Criacao: 24/06/2020

### Introdução

A ideia desse projeto é introduzir os alunos aos conceitos de introdução a computação grafica, ministrada pelo Prof. Dr. Christian Azambuja Pagot. Onde foi desenvolvida a rasterização de pontos, linhas e triangulos, onde foi utilizada a biblioteca grafica OpenGL Para isso foi utilizado uma base de codigo do Prof. Dr. Christian Azambuja Pagot, onde o codigo emulava a criação de uma memoria de video.

### Desenvolvimento

O projeto foi dividido em três partes importantes, sendo elas o desenvolvimentos das principais funções, putPixel(), DrawLine() e DrawTriangle(); para isso foram criados duas estruturas para auxiliar no desenvolvimento do programa e assim ficar mais facil e pratico o desenvolvimento, sendo elas a color e a point, onde color tinha a função de agrupar os elementos de uma cor em um vetor de 4 unidades, onde o primeiro [0] seria resevado para a cor vermelha (Red), o Segundo [1] a cor verde(Green), a terceira [2] a cor azul(Blue), e por fim na ultima [3] será armazenado o valor da cor alfa. Já na estrutura point ele irá armazenar dois valores inteiros para guardar a posição do ponto no espaço, um deles irá armazenar o valor da posição X e o outro da posição Y, além disso teremos uma estrutura color dentro dela que irá armazenar a cor do ponto.

