test-program: test-program.c
	make -C ../../1.memory_cell/src
	make -C ../src
	gcc test-program.c -o test-program -L. ../../lib/lib_memory_allocator.a ../../lib/lib_linked_list.a

clean:
	rm -rf test-program
