#ifndef _BIRTHDAY_PARTY_H_
#define _BIRTHDAY_PARTY_H_

#include <iostream>
#include <list>
#include <vector>
#include <string>
#include "Party.h"
#include "BirthdayPartyTicket.h"

// FIXME 2: Create BirthdayParty and BirthdayPartyTicket to host birthday parties!
// FIXME 3: Update PartyFactory::factory() to allow it to be the ONLY method for creating a BirthdayParty
/**
* BirthdayParty is derived from Party
*/
class BirthdayParty : public Party
{
private:
	std::list<std::string> PartyRoom;

	BirthdayParty() {}; // Constructor for a new birthday Party

	friend class PartyFactory;

public:
	PartyTicket *add(std::string name)
	{
		PartyRoom.push_front(name);
		std::list<std::string>::iterator it = PartyRoom.begin();
		BirthdayParty *newParty = new BirthdayParty();
		PartyTicket *ticket = new BirthdayPartyTicket(newParty, it);

		return ticket;
	}

	void list() // lists all the people at the birthday party
	{
		std::list<std::string>::iterator it = PartyRoom.begin();
		std::cout << *it << "->";
		++it;
	}

	void remove(std::list<std::string>::iterator it)
	{
		PartyRoom.erase(it);
	}
};

#endif