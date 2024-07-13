CC=gcc
CFLAGS=-Iinclude
LDFLAGS=-Llib
LIBS=-lcsv_to_txt
SRC=src/csv_to_txt.c
OBJ=lib/libcsv_to_txt.o
TARGET=lib/libcsv_to_txt.a

all: $(TARGET)

$(TARGET): $(OBJ)
	ar rcs $(TARGET) $(OBJ)

$(OBJ): $(SRC)
	$(CC) $(CFLAGS) -c $(SRC) -o $(OBJ)

clean:
	rm -f $(OBJ) $(TARGET)

test: all
	$(CC) test/main.c -o test/test_program $(CFLAGS) $(LDFLAGS) $(LIBS)