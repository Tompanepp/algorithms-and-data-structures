lib_array.a:
	make array.o
	ar rcs lib_array.a array.o
	mv lib_array.a ../lib
	make clean

array.o: array.c array.h ../datatype/datatype.h ../memory_cell/memory_allocator.c
	gcc -c array.c ../memory_cell/memory_allocator.c ../datatype/datatype.c

test-program:
	make -C ../memory_cell
	make -C ../datatype/
	make lib_array.a
	gcc test-program.c -o test-program -L. ../lib/lib_array.a ../lib/lib_memory_allocator.a ../lib/lib_datatype.a

clean:
	rm -rf *.o
	rm -rf *.h.gch
	rm -rf *.a
	rm -rf test-program