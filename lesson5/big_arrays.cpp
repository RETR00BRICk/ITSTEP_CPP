#include <iostream>

int main(){
/*
	int arr2d[3][3] = {
		{1,2,3}, //0
		{4,5,6}, //1
		{7,8,9} //2
	};
	std::cout << arr2d[1][0] << '\n';
	std::cout << arr2d[0][2] << '\n';
	
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			std::cout << arr2d[i][j] << ' ';
		}
		std::cout << '\n';
	}

	int arr3d[2][3][3] = {
		{ //0
			{1, 2, 3}, //0
			{4, 5, 6}, //1
			{7, 8, 9}  //2
		},
		{ //1
			{10, 11, 12}, //0
			{13, 14, 15}, //1
			{16, 17, 18}  //2
		}		
	};
	
	//std::cout << arr3d[1][1][1] << '\n';
	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 3; k++){
				std::cout << arr3d[i][j][k] << ' ';
			}
			std::cout << '\n';
		}
		std::cout << '\n';
	}
*/

	int arr4d[2][2][2][2]={
		{
			{
				{1,2},
				{3,4}
			},
			{
				{1,2},
				{3,4}
			}
		},
		{
			{
				{1,2},
				{3,4}
			},
			{
				{1,2},
				{3,4}
			}
		},
	}
	for(int i = 0; i < 2; i++){
		for(int j = 0; k < 2; j++){
			for(int k = 0; k < 2; k++){
				for(int x = 0; x < 2; x++){
					std::cout << arr4d[i][j][k][x] << ' ';
				}
				std::cout << '\n';
			}
			std::cout << '\n';
		}
		std::cout << '\n';
	}
}
