#ifndef SENECA_LIBAPP_H
#define SENECA_LIBAPP_H
#include <iostream>
#include "Menu.h"
#include "Publication.h"
#include "Book.h"  
#include "Lib.h"
#include "PublicationSelector.h"

namespace seneca {

    class LibApp {
        bool m_changed{};
        Menu m_mainMenu;
        Menu m_exitMenu;
        Menu m_publicationMenu;
        char m_fileName[256]{};
        Publication* PPA[SDDS_LIBRARY_CAPACITY]{};
        int NOLP; 
        int LLRN; 
        bool confirm(const char* msg);
        void load();  
        void save(); 
        int search(int srchType);  

        void returnPub();  
        void newPublication();
        void removePublication();
        void checkOutPub();
        Publication* getPub(int libRef);
    public:
        LibApp(const char* filename);
        ~LibApp();
        void run();
        void terminateMessage();
    };
}
#endif 