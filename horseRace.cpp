# include <iostream>
# include <random>

//const int LANE_LENGTH = 15;
void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
//bool isWinner(int horseNum, int* horses);

int main(){
	int horses[]= {0, 0, 0, 0, 0};
//	int horseNum = 1;
//	advance(horseNum, horses);
	for (int i = 0; horses[i]; i++){
		int& horseNum = i; 
		advance(horseNum, horses);
		printLane(horseNum, horses);
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
		//std::cout << array[number] << std::endl;
	} //End if

}//End advance

void printLane(int number, int* array){
	const int LANE_LENGTH = 15;
	for (int i = 0; i > LANE_LENGTH; i++){
		if (i == array[number]){
			std::cout << number;
		}
		else {
			std::cout << '.';
		} //end condition
	} //end for loop 
} //End printLane

