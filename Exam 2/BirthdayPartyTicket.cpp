#include "BirthdayPartyTicket.h"
#include "BirthdayParty.h"

/**
* Implements the leave method
*/
void BirthdayPartyTicket::leave() {
	// FIXME 4: Implement leave for birthday parties
	BirthdayParty *the_party = dynamic_cast<BirthdayParty *>(BDAY_party); //go from base class to derived class
	the_party->remove(me); // remove party goers identified by 'me'
}