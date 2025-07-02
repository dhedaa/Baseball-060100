#include <stdexcept>

using namespace std;

class Baseball {
public:
	void guess(const string& guessString) {
		if (guessString.length() != 3) {
			throw length_error("Must be three letters");
		}
		for (char ch : guessString) {
			if (ch < '0' || ch > '9') {
				throw invalid_argument("Must be number");
			}
		}
	}
};