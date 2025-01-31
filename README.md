# CS121 Project 3 - Procedural Horse Race

The goal of this project is to build a procedural horse-race game in C++. The main focuses of this project are to become more comfortable with the basics of C++ such as I/O, conditions, loops, data types, and randomization. 

## Progress

Code working as of 5:37 pm 1/31/2025. Fully functional program in "final" executable file. 

## Needed Functions

- advance() flips a coin using randomization and either moves the current horse or doesn't. The function is a void and will return nothing. 
- printLane() prints out the current horse's entire lane as dots, but with the horse number in the appropriate position. 
- isWinner() is a boolean and returns TRUE if the current horse has won the game or FALSE if it hasn't. 

## Main Function

Initialize the horses. In this case, we assume an array of 5 integers, each with values from 0-14.Each "horse" will start at 0.  

```
Constant LANE_LENGTH 
horses = [0, 0, 0, 0, 0]

```

Initialize while loop with keepGoing sentry.

```
keepGoing = true
while keepGoing:
	for i in horses:
		advance()
		printLane
		if isWinner() is true:
			print("<HorseNum> wins!")
			keepGoing = false
```

## Advance Function

Advance function uses randomization and either moves the current horse or doesn't. 

Initialize random using C++:

```
# include <random>
std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1)

coin = dist(rd);

```

We want the randomization to return either 0 or 1. 

```
If coin == 1:
	horse[i] position increases by 1
Else:
	horse[i] position stays the same
```


## printLane Function

Prints out the current horse's entire lane as dots, but with the horse number in the appropriate position. 

Each lane has 15 possible positions (0-14). 0 is the start line and 15 is the finish line. 

```
From 0 to LANE_LENGTH:
	If horse in position:
		print(horseNum)
	Else:
		print(.)
```

Printed lane should look like:

```
....0..........

```

## isWinner Function

A boolean that returns true if the current horse has won the game or false if it hasn't. To win the race, a horse must be beyond the finish line. 

```
winner = false
if horseNum's position > 14:
	winner = true
else:
	winner = false

return <winner>

```

