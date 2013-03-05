INCLUDE = -Iinclude

LIBRARIES = 
COMPILER = g++
SRC = src/*.cpp src/modules/*.cpp
COMPILERFLAGS = -g -03 $(INCLUDE) $(PACKAGES)
PROGRAM = current

# compile our main file
all: $(SRC)
	$(COMPILER) -o $(PROGRAM) $(SRC) $(COMPILERFLAGS)

# clean up all relevant files
clean: 
	rm -rf current*



