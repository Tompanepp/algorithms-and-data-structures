lib_linkedlist.a:
	make linkedlist.o
	ar rcs lib_linkedlist.a linkedlist.o
	mv lib_linkedlist.a ../lib
	make clean

linkedlist.o: linkedlist.h linkedlist.c node.h ../datatype/datatype.h ../memory_cell/memory_allocator.c
	gcc -c linkedlist.c ../memory_cell/memory_allocator.c

test-program: test-program.c
	make -C ../memory_cell
	make lib_linkedlist.a
	gcc test-program.c -o test-program -L. ../lib/lib_memory_allocator.a ../lib/lib_linkedlist.a

clean:
	rm -rf *.o
	rm -rf *.h.gch
	rm -rf *.a