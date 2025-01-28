# include <iostream>
# include <random>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main(){
	const LANE_LENGTH = 14;
	horses = [0, 0, 0, 0, 0];
	for (i in horses){
		horseNum = horses[i];
		advance(horseNum, int* horses);
		printLane(horseNum, int*horses);
	}//End for loop
}//End main

int advance(int number, int* array){
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0, 1);

	coin = dist(rd);
	if(coin == 1){
		array[i]++;
	} //End if
}//End advance

