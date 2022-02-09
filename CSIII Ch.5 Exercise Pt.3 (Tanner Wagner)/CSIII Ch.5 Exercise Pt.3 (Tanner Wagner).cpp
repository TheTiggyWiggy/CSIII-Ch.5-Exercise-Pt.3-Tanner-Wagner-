#include <iostream>
#include <vector>
using namespace std;

class Player
{
public:
	void playerMove();
	void drawCard()
	{
		vector<string> playerCard(20);
		vector<string> cardHold(100);

		playerCard.push_back("Advance to Boardwalk.");
		playerCard.push_back("Advance to Go (Collect $200)");
		playerCard.push_back("Advance to Illinois Avenue. If you pass Go, collect $200.");
		playerCard.push_back("Advance to St. Charles Place. If you pass Go, collect $200.");
		playerCard.push_back("Advance to the nearest Railroad. If unowned, you may buy it from the Bank. If owned, pay wonder twice the rental to which they are otherwise entitled.");
		playerCard.push_back("Advance to the nearest Railroad. If unowned, you may buy it from the Bank. If owned, pay wonder twice the rental to which they are otherwise entitled.");
		playerCard.push_back("Advance token to nearest Utility. If unowned, you may buy it from the Bank. If owned, throw dice and pay owner a total ten times amount thrown.");
		playerCard.push_back("Bank pays you dividend of $50");
		playerCard.push_back("Get Out of Jail Free"); // Does not go back in deck. Store in cardHolder
		playerCard.push_back("Go Back 3 Spaces");
		playerCard.push_back("Go to Jail. Go directly to Jail, do not pass Go, do not collect $200");
		playerCard.push_back("Make general repairs on all your property. For each house pay $25. For each hotel pay $100");
		playerCard.push_back("Speeding fine $15");
		playerCard.push_back("Take a trip to Reading Railroad. If you pass Go, collect $200");
		playerCard.push_back("You have been elected Chairman of the Board. Pay each player $50");
		playerCard.push_back("Your building loan matures. Collect $150");

		srand(time(0));

		for (int i = 0; i < playerCard.size(); ++i)
		{
			int randCard = rand() % playerCard.size();
			string tempCard = playerCard.at(i);
			playerCard.at(i) = playerCard.at(randCard);
			playerCard.at(randCard) = tempCard;
		}
		for (int i = 0; i < 1; ++i)
		{
			cout << playerCard.at(i) << endl;

			if (playerCard.at(i) == playerCard.at(9))
			{
				cout << "Hold on to this!" << endl;
				cardHold.push_back(playerCard.at(9));
			}
		}
	}
	void rollDie()
	{
		srand(time(0));
		int spinMin = 1;
		int spinMax = 6;
		int randSpin = rand() % (spinMax - spinMin + 1) + spinMin;

		cout << randSpin << endl;
	}
};

int main()
{
	
	return 0;
}