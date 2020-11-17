array.o: array.c array.h type.h
	gcc -c array.c 

lib_array.a:
	ar rcs lib_array.a array.o

test-program: test-program.c
	make clean
	make array.o
	make lib_array.a
	gcc test-program.c -o test-program -L. lib_array.a

clean:
	rm -rf *.o
	rm -rf lib_array.a
	rm -rf test-program
	rm -rf *.h.gch