test-program: test-program.c
	make -C ../src
	gcc test-program.c -o test-program -L. ../../lib/lib_array.a

clean:
	rm -rf test-program
