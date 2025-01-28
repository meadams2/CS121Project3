# CS121 Project 3 - Procedural Horse Race

The goal of this project is to build a procedural horse-race game in C++. The main focuses of this project are to become more comfortable with the basics of C++ such as I/O, conditions, loops, data types, and randomization. 

## Needed Functions

- advance() flips a coin using randomization and either moves the current horse or doesn't. The function is a void and will return nothing. 
- printLane() prints out the current horse's entire lane as dots, but with the horse number in the appropriate position. 
- isWinner() is a boolean and returns TRUE if the current horse has won the game or FALSE if it hasn't. 

## Main Function

Initialize the horses. In this case, we assume an array of 5 integers, each with values from 0-15.Each "horse" will start at 0.  

```

horses = [0, 0, 0, 0, 0]

```

Initialize while loop with keepGoing sentry.

```
while keepGoing:
	if <ENTER>:
		for i in horses:
			advance()
			printLane
			isWinner()
	if isWinner() is true:
		Print "<Winning Horse> wins!"
		keepGoing = False
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
For each possible position:
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

