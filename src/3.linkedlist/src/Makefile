lib_linked_list.a:
	make linked_list.o
	ar rcs lib_linked_list.a linked_list.o
	mv lib_linked_list.a ../../lib
	make clean

linked_list.o: linkedlist.h linkedlist.c node.h ../../headers/datatype.h
	gcc -c linkedlist.c -o linked_list.o

clean:
	rm -rf *.o
	rm -rf *.h.gch
	rm -rf *.a