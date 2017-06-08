// BlackJack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
enum RANK
{
	RANK_2,
	RANK_3,
	RANK_4,
	RANK_5,
	RANK_6,
	RANK_7,
	RANK_8,
	RANK_9,
	RANK_10,
	RANK_JACK,
	RANK_QUEEN,
	RANK_KING,
	RANK_ACE,
	MAX_RANK
};

enum SUIT
{
	CLUBS,
	DIAMONDS,
	SPADES,
	HEARTS,
	MAX_SUIT
};

struct Card
{
	RANK cardRanks;
	SUIT cardSuits;
};
printCard(const Card cards)
{


}
int main()
{
	printCard(Card Card);
	return 0;
}
