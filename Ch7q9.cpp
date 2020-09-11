#include <iostream>

using namespace std;

const int handSize = 5;



void getHand(int hand[])

{

	cout << "Enter five numeric cards, no face cards. Use 2 - 9" << endl;

	for (int i = 0; i < handSize; i++) {

		cout << "Card " << i + 1 << ": ";

		cin >> hand[i];

	}

}



void sortHand(int hand[])

{

	int temp_card;

	for (int i = 0; i < handSize - 1; i++)

		for (int j = i + 1; j < handSize; j++)

			if (hand[i] > hand[j]) {

				temp_card = hand[j];

				hand[j] = hand[i];

				hand[i] = temp_card;

			}

}


bool Straight(int hand[])

{

	for (int i = 0; i < handSize - 1; i++)

		if (hand[i] != hand[i + 1] - 1)

			return false;

	return true;

}



bool Pair(int hand[])

{

	for (int i = 0; i < handSize - 1; i++)

		for (int j = i + 1; j < handSize; j++)

			if (hand[i] == hand[j])

				return true;

	return false;

}



bool TwoPair(int hand[])

{

	bool pair1 = false;

	bool pair2 = false;

	for (int i = 0; i < handSize - 1; i++)

		for (int j = i + 1; j < handSize; j++) {

			if (hand[i] == hand[j]) {

				if (!pair1)

					pair1 = true;

				else

					pair2 = true;

				break;

			}

		}

	return pair1 && pair2;

}



bool ThreeOfaKind(int hand[])

{

	int card_count = 1;

	for (int i = 0; i < 3; i++, card_count = 1)

		for (int j = i + 1; j < handSize; j++) {

			if (hand[j] == hand[i])

				card_count++;

			if (card_count == 3)

				return true;

		}

	return false;

}


bool FourOfaKind(int hand[])

{

	int card_count = 1;

	for (int i = 0; i < 2; i++, card_count = 1)

		for (int j = i + 1; j < handSize; j++) {

			if (hand[j] == hand[i])

				card_count++;

			if (card_count == 4)

				return true;

		}

	return false;

}


bool FullHouse(int hand[])

{

	if (hand[0] == hand[1] && hand[2] == hand[3] && hand[3] == hand[4])

		return true;

	else if (hand[0] == hand[1] && hand[1] == hand[2] && hand[3] == hand[4])

		return true;

	return false;

}

int main()

{

	int hand[handSize];

	getHand(hand);

	sortHand(hand);

	if (FourOfaKind(hand))

		cout << "Four of a kind!";

	else if (FullHouse(hand))

		cout << "Full House!";

	else if (Straight(hand))

		cout << "Straight!";

	else if (ThreeOfaKind(hand))

		cout << "Three of a kind!";

	else if (TwoPair(hand))

		cout << "Two Pair!";

	else if (Pair(hand))

		cout << "Pair!";

	else

		cout << "High Card!";

	return 0;

}
