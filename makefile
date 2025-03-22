#target dependency lin.o file
exe: file_inc.o macro.o  main.o comment_removal.o
	cc file_inc.o macro.o main.o comment_removal.o -o akshay 

file_inc.o: file_inc.c
	cc -c file_inc.c

macro.o: macro.c
	cc -c macro.c

comment_removal.o: comment_removal.c
	cc -c comment_removal.c

main.o: main.c
	cc -c main.c

clear:
	@echo "cleaning uo ..."
	@rm -r *.o
