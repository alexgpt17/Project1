BIN_DIR = bin 
OBJ-DIR = obj 

all: directories runtest

build: g++ codefile.cpp

runtests: $(TARGET)
		 $(TARGET)

directories:
      mkdir -p $(BIN_DIR)
	    mkdir -p $(OBJ_DIR)