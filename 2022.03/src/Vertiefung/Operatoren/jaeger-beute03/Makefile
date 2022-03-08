BIN     = a.out
SOURCE  = AnzeigeAngriff.cpp AnzeigeFlucht.cpp AnzeigeRuhe.cpp AnzeigeWesen.cpp BewegungAngriff.cpp BewegungFlucht.cpp BewegungRuhe.cpp AnzeigeRuhe.cpp main.cpp WeltImpl.cpp WesenImpl.cpp Zustand.cpp ZustandAngriff.cpp ZustandFlucht.cpp ZustandRuhe.cpp

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

