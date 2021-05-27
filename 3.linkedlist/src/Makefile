lib_linked_list.a:
	make linked_list.o
	ar rcs lib_linked_list.a linked_list.o
	mv lib_linked_list.a ../../lib
	make clean

linked_list.o: LinkedList.c Node.h type.h
	gcc -c LinkedList.c 

clean:
	rm -rf *.o
	rm -rf *.h.gch