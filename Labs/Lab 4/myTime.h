// Name: Yinsheng Dong
// Student Number: 11148648
// NSID: yid164
// Lecture Section: CMPT 115 (02)


// type definition for times
struct myTime {
  int hour;			// the hour of the current time
  int minute;			// the minute of the current time
};

// The interface (function prototypes for operations)

// Algorithm createTime()
//   Post: a newly allocated myTime element is created
//         and initialized to be 0 hours and 0 minutes
//   Return: a pointer to the newly allocated myTime element.
myTime *createTime();

// Algorithm addHour(t)
// this will add one hour to the myTime pointed to by t.
//   Pre: t is a pointer to a myTime
//   Post: the myTime variable has had the hour increased by one,
//         unless it was 23, in which case, it is reset to 0.
void addHour(myTime*);

// Algorithm destroyTime(t)
// this will deallocate the myTime data structure from the heap
//   Pre: t is a pointer to a myTime
//   Post: the space consumed by t is released
void destroyTime(myTime*);

// Algorithm printTime(t)
// This will display the time to the screen
//  Pre: t is a pointer to a myTime
//  Post: the time should be in a friendly format (HH:MM)
void printTime(myTime *t);

// Algorithm addMinute(t)
// This will add one minute to the myTime pointed to by t
//  Pre: t is a pointer to a myTime
//  Post: the myTime variable has had the minute increased by one
//      Unless it was 59, in which case, it is reset to 0
void addMinute(myTime *t);
