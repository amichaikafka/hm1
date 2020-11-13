CC=gcc
AR=ar 
FLAGS=-Wall -g

 all:  maind mains mymaths mymathd  

 mains: main.o mymaths
	gcc $(FLAGS) -o mains main.o libmyMath.a 
 maind: main.o mymathd
	gcc $(FLAGS) -o maind main.o ./libmyMath.so 
mymaths: basicMath.o power.o
	ar -rcs libmyMath.a basicMath.o power.o
mymathd: basicMath.o power.o
	gcc -shared -o libmyMath.so basicMath.o power.o
main.o: main.c myMath.h
	gcc $(FLAGS) -c main.c 
basicMath.o: basicMath.c  myMath.h
	gcc $(FLAGS) -c basicMath.c 
power.o: power.c myMath.h
	gcc $(FLAGS) -c power.c
clean:
	rm -f *.o *.a *.so	mains maind  	  