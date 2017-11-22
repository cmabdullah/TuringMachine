APPNAME = TuringMachine
CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		${APPNAME}.o

LIBS = 
ifeq "$(APPNAME)" "Test"
LDFLAGS = -L/usr/X11/lib  -MMD 
CFLAGS += -D__APPLE__
endif  
$(APPNAME):	$(OBJS)
	g++ -o $(APPNAME) $(OBJS) $(LIBS) $(LDFLAGS) 

all:	$(APPNAME)

clean:
	rm -f $(OBJS) $(APPNAME)
