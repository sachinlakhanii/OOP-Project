#include<iostream>
#include<string>
using namespace std;

class Event 
{
    private:
        int eventID;
        string eventName;
        string eventDate;
        string eventLocation;
        string eventTime;
    public:
        void eventDetails(int eventID, string eventName, string eventDate, string eventLocation, string eventTime);
        void updateDetails(int newEventID, string newEventName, string newEventDate, string newEventLocation, string newEventTime);
};

class Attendee 
{
    private:
        int attendeeID;
        string attendeeName;
        string attendeeContact;
    public:
        void attendeeDetails(int attendeeID, string attendeeName, string attendeeContact);
        void registration(int newAttendeeID, string newAttendeeName, string newAttendeeContact);
};

class Organizer 
{
    private:
        int organizerID;
        string organizerName;
        string organizerEmail;
        int organizerNum;
    public:
        void organizerDetails(int id, string name, string email, int organizerPhoneNumber);
};

class Venue 
{
    private:
        string venueName;
        int venueID;
        string location;
    public:
        void venueDetails(string venueName, int venueID, string location);
};

class Ticket 
{
    private:
        string ticketType;
        int ticketID;
        double ticketPrice;
    public:
        void ticketDetails(string type, int id, double price);
        void issueTicket(string type, int id);
};

class Schedule 
{
    private:
        string eventName;
        int eventID;
        string date;
        string time;
    public:
        void scheduleDetails(string eventName, int eventID, string date, string time);
        void createSchedule(string newEventName, int newEventID, string newDate, string newTime);
};

class Feedback 
{
    private:
        int feedbackID;
        int eventID;
        int attendeeID;
        int rating;
        string comments;
    public:
        void feedbackDetails(int feedbackID, int eventID, int attendeeID, int rating, string comments);
        void submitFeedback(int feedbackID, int eventID, int attendeeID, int rating, string comments);
};

class Budget 
{
    private:    
        int budgetID;
        int eventID;
        double totalBudget;
    public:
        void budgetDetails(int budgetID, int eventID, double totalBudget);
};

int main()
{
    return 0;
}