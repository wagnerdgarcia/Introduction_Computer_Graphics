CC = g++

all:
	$ export MESA_GL_VERSION_OVERRIDE=3.3
	$(CC) -Wall -Wextra -Wpedantic -std=c++17 -O0 -g3 -DDEBUG main.cpp -lglut -lGLEW -lGLU -lGL -o transform_gl
	$ ./transform_gl
clean:
	rm transform_gl
