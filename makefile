all:build run

build: 
	g++ main.cpp -o main 

run: 
	./main

clean: 
	rm main