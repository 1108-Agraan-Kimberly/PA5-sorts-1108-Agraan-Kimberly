sorts: driver.o sorter.o
	g++ driver.o sorter.o -o sorts 
driver.o: driver.cpp sorter.h
	g++ -c driver.cpp 
sorter.o: sorter.h sorter.cpp
	g++ -c sorter.cpp 
clean: 
	rm *.o sorts 