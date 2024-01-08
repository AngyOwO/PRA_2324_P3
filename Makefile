bin/testTableEntry: testTableEntry.cpp TableEntry.h
	mkdir -p bin
	g++ -o bin/testTableEntry testTableEntry.cpp

testTableEntry: bin/testTableEntry
	./bin/testTableEntry

bin/testHashTable: testHashTable.cpp HashTable.h
	mkdir -p bin
	g++ -o bin/testHashTable testHashTable.cpp

clean:
	rm -rf *.o *.gch bin
