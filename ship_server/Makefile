CFLAGS=-g -c -Wall -Wfatal-errors --std=gnu99
LDFLAGS=-g -lc -lm
SOURCES=ship_server.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=ship_server

all: $(SOURCES) $(EXECUTABLE)

again: clean all

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) $^ -o $@
