#include<iostream>
#include "string.h"
using namespace std;
class Date
{
public:
  Date(int year,int month,int day)
  {
   month=month;
   year=year;
   day=day;
  }
  bool isValidDate(int year,int month,int day)
  {
    year = year;
    if(month<0 | month>12)
    {
      return false;
    }
    cout<<"Month is invalid!"<<endl;
  else if(day!=DAY[])
  {
    return false;
  }
  cout<<"Date is invalid"<<endl;
  else
  {
    return true;
  }
}
  
  int getDayOfWeek(int year,int month,int day)
  {
    year=year;
    month=month;
    year=year;
    int d=2;
for(int j=1800;j<year;j++)
{if(j%4==0)
{
d++;
}
for(int i=0;i<12;i++)
{
d+=day_in_month[i];
}
}
if(year%4==0 and month>2)
{
d++;
}
for(int i=0;i<month-1;i++)
{
d+=day_in_month[i];
}
d+=day;
  return d%7;
}
//cout<<date<<"-"<<month<<"-"<<year<<endl;

  int getDay()
  {
  return day;
  }
  //Date(int year,int month,int day)
  //{}
  void setDate(int year,int month,int day)
  {
    year=year;
    month=month;
    day=day;
  }
  int getyear()
  {
return year;
  }
  int getMonth()
  {
return month;
  }
  void print()
  {
cout<<day<<"-"<<months[month-1]<<"-"<<year<<"."<<endl;
  }
private:
  int year;
  int month;
  int day;
  string MONTHS[12] = {"jan", "feb", "mar", "apr", "may", "june", "jul", "aug", "sep", "oct", "nov", "dec"};
  string DAY[7] = {"sunday" "monday","tuesday","wednesday","thursday","friday","saturday"};
  int Days_in_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
};
int main(int argc, char const *argv[])
 {
   int ye;
   int mo;
   int da
   cout<<"Enter Year"<<endl;
   cin>>ye;
   cout<<"Enter Year"<<endl;
   cin>>mo;
   cout<<"Enter Year"<<endl;
   cin>>da;
  //Date D;
  Date D1(1900,11,16);
  D1.isValidDate();
  {
    if(D1.isValidDate(ye,mo,da)==false)
  {
    cout<<"Invalid Entries"<<endl;
  }
  else if(D1.isValidDate(ye,mo,da)==true)
  D1.setDate(ye,mo,da)
  cout<<"year is="<<D1.getyear()<<endl;
  cout<<"month is="<<D1.getMonth()<<endl;
  cout<<"day is="<<D1.getDay()<<endl;
  cout<<"DayOfWeek is="<<D1.getDayOfWeek(ye,mo,da)<<endl;
  D1.print();
  cout<<"THE_END"<<endl;
  }




  return 0;
}
