#ifndef LOTTO_H
#define LOTTO_H
#include <iostream> // needed to run program
#include <string> // allows use of strings

using namespace std; // needed to run program

class Lotto // used in all the ticket purchasing functions
{
	int euroMillionsTicketCount; // total amount of tickets purchased of this type
	int ukLottoTicketCount;// same as above
	int thunderballTicketCount; // same as euro count
	int weekCount; // every 4 weeks data is reset

	string thunderballTickets; // these hold the values of each ticket before being saved or after being loaded.
	string ukLottoTickets; // same as above
	string euroMillionsTickets; // same as thunderball

	int totalWeeks; // holds total weeks passed.


public:

	// gets
	int geteuroMillionsTicketCount();
	int getukLottoTicketCount();
	int getthunderballTicketCount(); 
	int getweekCount(); 
	string getthunderballTickets(); 
	string getukLottoTickets();
	string geteuroMillionsTickets();
	int gettotalWeeks();

	// sets
	void seteuroMillionsTicketCount(int);
	void setukLottoTicketCount(int);
	void setthunderballTicketCount(int); 
	void setweekCount(int); 
	void setthunderballTickets(string);
	void setukLottoTickets(string);
	void seteuroMillionsTickets(string);
	void settotalWeeks(int); 



};
#endif