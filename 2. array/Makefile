array.o: array.c array.h type.h
	gcc -c array.c 

lib_array.a:
	ar rcs lib_array.a array.o

test-program: test-program.c
	gcc test-program.c -o test-program -L. lib_array.a

clean:
	rm *.o