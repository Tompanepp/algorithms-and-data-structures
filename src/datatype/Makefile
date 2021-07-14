lib_datatype.a:
	make datatype.o
	ar rcs lib_datatype.a datatype.o
	mv lib_datatype.a ../lib
	make clean
datatype.o: datatype.c datatype.h 
	gcc -c datatype.c 

clean:
	rm -rf *.o
	rm -rf *.h.gch
	rm -rf *.a
	rm -rf test-program