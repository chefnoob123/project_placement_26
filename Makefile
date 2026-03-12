CC = g++
CFLAGS = -Wall -g
TARGET = app
SOURCES = main.cpp

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) -o $(TARGET) $(SOURCES)
