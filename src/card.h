#ifndef CARD_H
#define CARD_H

#include <iostream>
using namespace std;

class Card {
    /* Penampung jenis kartu */
    private :
        int number;
        string cardType;

    public :
        Card() {}; // Konstruktor
        // Getter dan setter
        int getNumber();
        string getType();
        void setNumber(int i);
        void setType(string t);
};

#endif