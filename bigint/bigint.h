#include <string>

using namespace std;

class bigint
{
private:

	string aMinusB(string a, string b);

	string aPlusB(string a, string b);

	string aTimesB(string a, string b);

	string aMinusBWithoutCompare(string a, string b);

	string aDivideByB(string a, string b);

	string aModularB(string a, string b);

public:
	int compare(string a, string b);

	string sub(string a, string b);

	string add(string a, string b);

	string mul(string a, string b);

	string div(string a, string b);

	string mod(string a, string b);
};
