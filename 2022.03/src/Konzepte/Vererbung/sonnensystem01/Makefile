BIN     = a.out
SOURCE  = main.cpp Asteroid.cpp Planet.cpp Stern.cpp Sonnensystem.cpp

OBJF    = $(SOURCE:%.cpp=%.o)
DEPFILE = .dep~
LFLAGS  =           
CFLAGS  = -O2 -Wall -std=c++11

all: $(BIN)

-include $(DEPFILE)

$(DEPFILE): $(SOURCE)
	$(CXX) -MM $(CFLAGS) $(SOURCE) > $(DEPFILE)	

$(BIN): $(OBJF)
	$(CXX) $(LFLAGS) $(OBJF) -o $(BIN) 

clean:
	rm -f $(OBJF) $(BIN) $(DEPFILE)

.cpp.o: 
	$(CXX) $(CFLAGS) -c $< -o $@

