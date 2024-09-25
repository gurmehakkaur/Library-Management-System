
#ifndef SENECA_BOOK_H
#define SENECA_BOOK_H
#include "Publication.h"
#include "Lib.h"

namespace seneca {
	class Book :public Publication {
		char* m_name{};
	public:
		Book();
		Book(const Book& book);
		Book& operator=(const Book& book);
		~Book();

		char type()const;
		std::ostream& write(std::ostream& os) const;
		std::istream& read(std::istream& istr);
		void set(int member_id);
		operator bool() const;
	};
}
#endif 