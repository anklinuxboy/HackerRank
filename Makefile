CC=g++ -std=c++11
CFLAGS=-g -Wall -Werror -O1

FILE=xor

$(FILE):$(FILE).cpp
	$(CC) $(CFLAGS) -o $(FILE) $^

clean:
	rm $(FILE)
