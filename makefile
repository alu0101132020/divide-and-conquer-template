CC=gcc
CXX=g++
RM=rm -f
CFLAGS=-g -O2
LDFLAGS=-g -O2

FRAMEWORK_SRS=framework/framework.cpp framework/problema.cpp framework/solucion.cpp
EXAMPLE_SRS=examples/fibonaccip.cpp examples/fibonaccis.cpp
MERGESORT_SRS=mergesort/mergesortp.cpp mergesort/mergesorts.cpp
QUICKSORT_SRS=quicksort/quicksortp.cpp quicksort/quicksorts.cpp

SRCS=main.cpp $(FRAMEWORK_SRS) $(EXAMPLE_SRS) $(MERGESORT_SRS) $(QUICKSORT_SRS)
OBJS=$(subst .cpp,.o,$(SRCS))

all: main

main: $(OBJS)
	$(CXX) $(LDFLAGS) -o main $(OBJS) 

depend: .depend

.depend: $(SRCS)
	rm -f ./.depend
	$(CXX) $(CPPFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)

dist-clean: clean
	$(RM) *~ .dependtool

include .depend
