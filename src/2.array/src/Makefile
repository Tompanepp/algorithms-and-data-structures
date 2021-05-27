lib_array.a:
	make array.o
	ar rcs lib_array.a array.o
	mv lib_array.a ../../lib
	make clean

array.o: array.c array.h ../../headers/datatype.h
	gcc -c array.c -o array.o

clean:
	rm -rf *.o
	rm -rf *.h.gch