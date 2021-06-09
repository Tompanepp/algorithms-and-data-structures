test-program: test-program.c
	make -C ../../1.memory_cell/src/
	make -C ../../datatype/
	make -C ../src
	gcc test-program.c -o test-program -L. ../../lib/lib_array.a ../../lib/lib_memory_allocator.a ../../lib/lib_datatype.a

clean:
	rm -rf test-program
