#ifndef DATE_H
#define DATE_H
#include <string>
class Date {
public:
  enum Month {
    January = 0,
    February = 1,
    March = 2,
    April = 3,
    May = 4,
    June = 5,
    July = 6,
    August = 7,
    September = 8,
    October = 9,
    November = 10,
    December = 11
  };

  Date();

  Date(int day, Month month, int year);

  static Date currentDate();

  std::string format() const;

  bool valid() const;

  int differenceInDays(const Date &other) const;


  operator tm() const;

  bool operator ==(const Date &other) const;

  bool operator !=(const Date &other) const;

private:
  int _year;
  Month _month;
  int _day;
};
#endif // DATE_H
