#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Date {
private:
  int day;
  int month;
  int year;

public:
  void set(int day, int month, int year) {
    this->day = day;
    this->month = month;
    this->year = year;
  }

  bool isLeapYear(int year) {
    if (year % 4 == 0) {
      if (year % 100 == 0) {
        return year % 400 == 0;
      }
      return true;
    }
    return false;
  }

  void check() {
    if (day <= 0 || day > 31) {
      cout << "Invalid day: " << day << endl;
    } else if (month <= 0 || month > 12) {
      cout << "Invalid month: " << month << endl;
    } else if (year <= 1899 || year > 2024) {
      cout << "Invalid year: " << year << endl;
    } else if (month == 2) { // February
      if (isLeapYear(year)) {
        if (day > 29) {
          cout << "Invalid day for February: " << day << endl;
        }
      } else if (day > 28) {
        cout << "Invalid day for February: " << day << endl;
      }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) { // April, June, September, November
      if (day > 30) {
        cout << "Invalid day for " << month << ": " << day << endl;
      }
    } else if (day > 31) { // Other months
      cout << "Invalid day for " << month << ": " << day << endl;
    } else {
      cout << "Valid date" << endl;
    }
  }
};

int main() {
  Date x;
  x.set(3, 12, 2003);
  x.check();
}

class mydata{
    double num;
    public:
    mydata()
    {
        cin>>num;
        this->num=num;
        double sq=num*num;
        cout<<sq;
    }
};
int main()
{
    mydata x;
}