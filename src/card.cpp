#include "card.h"

using namespace std;

// Getter dan setter
int Card :: getNumber() {
    return number;
}
string Card :: getType() {
    return cardType;
}
void Card :: setNumber(int i) {
    number = i;
}
void Card :: setType(string t) {
    cardType = t;
}