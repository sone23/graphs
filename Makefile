CXXFLAGS := -std=c++11

all: graph

graph-graph.csv: graph
	./graph > graph-graph.csv

test-run: graph
	./graph 100000 40

graph: graph.cpp
	g++ $(CXXFLAGS) -o $@ $^

clean:
	-rm -f graph