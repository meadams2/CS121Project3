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
	for i in horses:
		advance()
		isWinner()
		printLane
	if isWinner() is true:
		Print "<Winning Horse> wins!"
		keepGoing = False
```
 
