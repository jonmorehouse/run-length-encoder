INCLUDE = -Iinclude

LIBRARIES = 
COMPILER = /usr/local/gcc/usr/local/bin/g++
# COMPILER = g++
SRC = src/*.cpp src/modules/*.cpp
COMPILERFLAGS = -O3 -std=c++11 $(INCLUDE) $(PACKAGES)
# COMPILERFLAGS = -O3 $(INCLUDE) $(PACKAGES)

PROGRAM = current

# compile our main file
all: $(SRC)
	$(COMPILER) $(COMPILERFLAGS) -o $(PROGRAM) $(SRC)

# clean up all relevant files
clean: 
	rm -rf current*



