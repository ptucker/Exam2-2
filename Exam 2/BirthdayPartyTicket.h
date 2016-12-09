#ifndef _BIRTHDAY_PARTY_TICKET_H_
#define _BIRTHDAY_PARTY_TICKET_H_

#include <list>
#include <string>
#include "Party.h"
#include "PartyTicket.h"

class BirthdayPartyTicket : public PartyTicket
{
private :
	Party *BDAY_party; //type of party ticket is associated with
	std::list<std::string>::iterator me; // iterator for specific person at party

public:
	BirthdayPartyTicket(Party *BDAY_party, std::list<std::string>::iterator me) : BDAY_party(BDAY_party), me(me) {}

	void leave(); // lets a person leave a party... or I make someone leave >:)
};

#endif