CC = gcc

CFLAGS = -g -Wall

TARGET = binary_tree
DRIVER = driver
all : $(TARGET)

$(TARGET) : $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(DRIVER).c $(TARGET).c $(TARGET).h

clean:
	$(RM) $(TARGET)
