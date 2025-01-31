# include <iostream>
# include <random>

const int LANE_LENGTH = 15;
const int NUM_HORSES = 5;
void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);

int main(){
	int horses[]= {0, 0, 0, 0, 0};
//	int horseNum = 1;
//	advance(horseNum, horses);
	bool keepGoing = true;
	while (keepGoing){
		for (int i = 0; i < NUM_HORSES; i++){
			int& horseNum = i; 
			advance(horseNum, horses);
			printLane(horseNum, horses);
			if (isWinner(horseNum, horses)){
				keepGoing = false;
			}
		}//End for loop
		std::cout << "Press ENTER to continue";
		std::cin.ignore();
	}//End while loop
	return 0;
}//End main

void advance(int number, int* array){
	int coin = dist(rd);
//	std::cout << coin << std::endl; testing purpose
	if(coin == 1){
		array[number]++;
		//std::cout << array[number] << std::endl;
	} //End if

}//End advance

void printLane(int number, int* array){
//	const int LANE_LENGTH = 15;
	for (int i = 0; i < LANE_LENGTH; i++){
		if (i == array[number]){
			std::cout << number;
		}
		else {
			std::cout << ".";
		} //end condition
	} //end for loop
	std::cout << std::endl;
} //End printLane

bool isWinner(int number, int* array){
	bool winner = false;
	if (array[number] > LANE_LENGTH){
		winner = true;
		std::cout << number << "wins!";
		std::cout << std::endl;
	}
	else{
		winner = false;
	}//End condition
	return winner;
}//End isWinner()
