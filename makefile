A4: miscFunctions.o queueFunctions.o helper.o testA4.o
	gcc -Wall -std=c99 miscFunctions.o queueFunctions.o helper.o testA4.o -o A4

miscFunctions.o: miscFunctions.c headerA4.h
	gcc -Wall -std=c99 -c miscFunctions.c

queueFunctions.o: queueFunctions.c headerA4.h
	gcc -Wall -std=c99 -c queueFunctions.c

helper.o: helper.c headerA4.h
	gcc -Wall -std=c99 -c helper.c

testA4.o: testA4.c headerA4.h
	gcc -Wall -std=c99 -c testA4.c

clean:
	rm *.o A4