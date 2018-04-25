all: bin/chessviz bin/test

bin/chessviz: build/main.o build/inicialithation_chess.o build/check_two.o build/print.o build/check_one.o build/check_free.o
	gcc -Wall -Werror build/check_one.o build/main.o build/inicialithation_chess.o build/check_two.o build/check_free.o build/print.o -o bin/chessviz

build/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o

build/check_free.o: src/check_free.c
	gcc -Wall -Werror -c src/check_free.c -o build/check_free.o

build/inicialithation_chess.o: src/inicialithation_chess.c
	gcc -Wall -Werror -c src/inicialithation_chess.c -o build/inicialithation_chess.o

build/check_two.o: src/check_two.c
	gcc -Wall -Werror -c src/check_two.c -o build/check_two.o

build/print.o: src/print.c
	gcc -Wall -Werror -c src/print.c -o build/print.o

build/check_one.o: src/check_one.c
	gcc -Wall -Werror -c src/check_one.c -o build/check_one.o


bin/test: build/test.o build/ctest.o build/inicialithation_chess.o build/check_two.o build/print.o
	gcc -Wall build/test.o build/ctest.o build/inicialithation_chess.o build/check_two.o build/print.o -o bin/test
	
build/test.o: test/test.c 
	gcc -I thirdparty -I src -c test/test.c -o build/test.o

build/ctest.o: test/ctest.c
	gcc -I thirdparty -c test/ctest.c -o build/ctest.o

test: bin/test
	bin/test

.PHONY: clean
clean:
	rm -rf build/*.o


