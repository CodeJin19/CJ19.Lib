#include <string>

using namespace std;

class bigint
{
public:
	int isBigger(string a, string b);

	string aMinusB(string a, string b);

	string aPlusB(string a, string b);

	string sub(string a, string b);

	string add(string a, string b);

	string aTimesB(string a, string b);

	string mul(string a, string b);

	string aMinusBWithoutCompare(string a, string b);

	string aDivedsByBInt(string a, string b, string* rem);
};
