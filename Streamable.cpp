#include <iostream>
#include "Streamable.h"

using namespace std;

namespace seneca {
	std::ostream& operator<<(std::ostream& os, const Streamable& S) {
		if (S) {
			return S.write(os);
		}
		return os;
	}
	std::istream& operator>>(std::istream& is, Streamable& S) {
		return S.read(is);
	}
}