lib_linkedlist.a:
	make linkedlist.o
	make node.o
	ar rcs lib_linkedlist.a linkedlist.o node.o
	mv lib_linkedlist.a ../lib
	make clean

linkedlist.o: linkedlist.h linkedlist.c node.h ../datatype/datatype.h ../memory_cell/memory_allocator.h
	gcc -c linkedlist.c node.c ../memory_cell/memory_allocator.c ../datatype/datatype.c

node.o: node.c node.h ../memory_cell/memory_allocator.c
	gcc -c node.c ../memory_cell/memory_allocator.c

test-program:
	make -C ../memory_cell/
	make -C ../datatype/
	make lib_linkedlist.a
	gcc test-program.c -o test-program -L. ../lib/lib_linkedlist.a ../lib/lib_memory_allocator.a ../lib/lib_datatype.a

clean:
	rm -rf *.o
	rm -rf *.h.gch
	rm -rf *.a
	rm -rf test-program