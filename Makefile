bin/testTableEntry: testTableEntry.cpp TableEntry.h
	mkdir -p bin
	g++ -o bin/testTableEntry testTableEntry.cpp

testTableEntry: bin/testTableEntry
	./bin/testTableEntry
clean:
	rm -rf *.o *.gch bin
