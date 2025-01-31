# include <iostream>
# include <random>

const LANE_LENGTH = 15
void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
//bool isWinner(int horseNum, int* horses);

int main(){
	int horses = [0, 0, 0, 0, 0];
	for (int i = 0; horses[i]; i++){
		horseNum& = horses[i];
		advance(horseNum, int* horses);
		printLane(horseNum, int* horses);
	}//End for loop
	return 0;
}//End main

void advance(int number, int* array){
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0, 1);
	int coin = dist(rd);
	std::cout << coin << std::endl;
	if(coin == 1){
		array[number]++;
	} //End if
}//End advance

void printLane(int number, int* array){
	for (int i = 0; i < LANE_LENGTH; i++){
		if (i == array[number]){
			std::cout << number;
		}
		else {
			std::cout << '.';
		}
	}// end for loop
	std::cout << std::endl;
}// End printLane
