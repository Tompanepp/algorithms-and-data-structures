lib_array.a:
	make array.o
	ar rcs lib_array.a array.o
	mv lib_array.a ../../lib
	make clean

array.o: array.c array.h ../../model/datatype.h ../../1.memory_cell/src/memory_allocator.c
	gcc -c array.c ../../1.memory_cell/src/memory_allocator.c

clean:
	rm -rf *.o
	rm -rf *.h.gch
	rm -rf *.a