#include <iostream>
using namespace std;
int main()
{
	enum Name
	{
		michealJordan,
		lebronJames,
		kobeBryant
};
	Name nameEnum = lebronJames;
	switch (nameEnum)
	{
	case michealJordan: 
		cout << "5star";
		break;
	case lebronJames:
		cout << "4star";
		break;
	case kobeBryant:
		cout<< "3star";
		break;
	default:
		cout << "other basketball players 1-2 star";
		break;
	}
}
//ooriin bagts uusgeed teriigee songoj shalgaj uzeh
