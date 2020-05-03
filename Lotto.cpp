#include "Lotto.h"

// tells the program what to do with values entered into variables 
    int Lotto::geteuroMillionsTicketCount()
	{
		return euroMillionsTicketCount;
	}
	int Lotto::getukLottoTicketCount()
	{
		return ukLottoTicketCount;
	}
	int Lotto::getthunderballTicketCount()
	{
		return thunderballTicketCount;
	}
	int Lotto::getweekCount()
	{
		return weekCount;
	}
	string Lotto::getthunderballTickets()
	{
		return thunderballTickets;
	}
	string Lotto::getukLottoTickets()
	{
		return ukLottoTickets;
	}
	string Lotto::geteuroMillionsTickets()
	{
		return euroMillionsTickets;
	}
	int Lotto::gettotalWeeks()
	{
		return totalWeeks;
	}

	void Lotto::seteuroMillionsTicketCount(int number)
	{
		euroMillionsTicketCount += number;
	}
	void Lotto::setukLottoTicketCount(int number)
	{
		ukLottoTicketCount += number;
	}
	void Lotto::setthunderballTicketCount(int number)
	{
		thunderballTicketCount += number;
	}
	void Lotto::setweekCount(int number)
	{
		weekCount += number;
	}
	void Lotto::setthunderballTickets(string numbers)
	{
		thunderballTickets = numbers;
	}
	void Lotto::setukLottoTickets(string numbers)
	{
		ukLottoTickets = numbers;
	}
	void Lotto::seteuroMillionsTickets(string numbers)
	{
		euroMillionsTickets = numbers;
	}
	void Lotto::settotalWeeks(int number)
	{
		totalWeeks += number;
	}