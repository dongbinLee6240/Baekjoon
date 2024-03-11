#include<iostream>
using namespace std;

int main()
{
	int king;
	int queen;
	int look;
	int bishop;
	int knight;
	int pawn;

	cin >> king >> queen >> look >> bishop >> knight >> pawn;

	king = 1 - king;
	queen = 1 - queen;
	look = 2 - look;
	bishop = 2 - bishop;
	knight = 2 - knight;
	pawn = 8 - pawn;

	cout << king <<" "<< queen <<" "<< look <<" "<<bishop<<" "<< knight << " " << pawn;

	return 0;
}