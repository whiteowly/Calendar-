
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  char response;
  do
  {
    int year, quarter, FirstDay, key, date, EthYear;
    int YearCode, MonthCode, CenturyCode, YearKey, months;
    bool GregLeapYear, EthLeapYear;
    int i = 0;
    int count = 0;
    int MonthDays;

    string month[14] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    cout << "\n\nEnter the year (Julian or Gregorian): ";
    cin >> year;
    EthYear = year - 8;
    if ((EthYear + 1) % 4 == 0)
      EthLeapYear = true;
    else
      EthLeapYear = false;
    cout << "Gregorian Year: " << year << "\tEthiopian Years: " << EthYear << " - " << EthYear + 1 << endl
         << endl;

    if (year == 1752)
    {
      while (i <= 11)
      {

        if (i == 0)
        {
          cout << month[i] << "\t\tTahisas - Tir" << endl
               << endl;
        }
        else if (i == 1)
        {
          cout << month[i] << "\t\tTir - Yekatit" << endl
               << endl;
        }
        else if (i == 2)
        {
          cout << month[i] << "\t\tYekatit - Megabit" << endl
               << endl;
        }
        else if (i == 3)
        {
          cout << month[i] << "\t\tMegabit - Miyazya" << endl
               << endl;
        }
        else if (i == 4)
        {
          cout << month[i] << "\t\tMiyazya - Ginbot" << endl
               << endl;
        }
        else if (i == 5)
        {
          cout << month[i] << "\t\tGinbot - Sene" << endl
               << endl;
        }
        else if (i == 6)
        {
          cout << month[i] << "\t\tSene - Hamle" << endl
               << endl;
        }
        else if (i == 7)
        {
          cout << month[i] << "\t\tHamle - Nehase" << endl
               << endl;
        }
        else if (i == 8)
        {
          cout << month[i] << "\t\tNehase - Pagume - Meskerem" << endl
               << endl;
        }
        else if (i == 9)
        {
          cout << month[i] << "\t\tMeskerem - Tikimt" << endl
               << endl;
        }
        else if (i == 10)
        {
          cout << month[i] << "\t\tTikimt - Hidar" << endl
               << endl;
        }
        else if (i == 11)
        {
          cout << month[i] << "\t\tHidar - Tahisas" << endl
               << endl;
        }

        CenturyCode = 6;

        if (month[i] == "January")
          MonthCode = 0;
        else if (month[i] == "February")
          MonthCode = 3;
        else if (month[i] == "March")
          MonthCode = 3;
        else if (month[i] == "April")
          MonthCode = 6;
        else if (month[i] == "May")
          MonthCode = 1;
        else if (month[i] == "June")
          MonthCode = 4;
        else if (month[i] == "July")
          MonthCode = 6;
        else if (month[i] == "August")
          MonthCode = 2;
        else if (month[i] == "September")
          MonthCode = 5;
        else if (month[i] == "October")
          MonthCode = 0;
        else if (month[i] == "November")
          MonthCode = 3;
        else if (month[i] == "December")
          MonthCode = 5;

        YearCode = 5;

        date = 1;
        GregLeapYear == true;

        if (month[i] == "January" || month[i] == "February")
          FirstDay = (YearCode + CenturyCode + date + MonthCode - 2) % 7;
        else if (month[i] == "March" || month[i] == "April" || month[i] == "May" || month[i] == "June" || month[i] == "July" || month[i] == "August" || month[i] == "September")
          FirstDay = (YearCode + CenturyCode + date + MonthCode - 1) % 7;
        else
          FirstDay = (YearCode + CenturyCode + date + MonthCode - 3) % 7;

        if (month[i] == "January")
          MonthDays = 31;
        else if (month[i] == "February")
          MonthDays = 29;
        else if (month[i] == "March")
          MonthDays = 31;
        else if (month[i] == "April")
          MonthDays = 30;
        else if (month[i] == "May")
          MonthDays = 31;
        else if (month[i] == "June")
          MonthDays = 30;
        else if (month[i] == "July")
          MonthDays = 31;
        else if (month[i] == "August")
          MonthDays = 31;
        else if (month[i] == "September")
          MonthDays = 30;
        else if (month[i] == "October")
          MonthDays = 31;
        else if (month[i] == "November")
          MonthDays = 30;
        else if (month[i] == "December")
          MonthDays = 31;

        int current = FirstDay;
        int count = 0;
        count = 7 - current;
        int row;
        int space;
        int ethdays = 0;
        int FirstEthDay;
        int ethcounter;
        if (month[i] == "January")
          FirstEthDay = 23;
        else if (month[i] == "February")
          FirstEthDay = 24;
        else if (month[i] == "March")
          FirstEthDay = 22;
        else if (month[i] == "April")
          FirstEthDay = 23;
        else if (month[i] == "May")
          FirstEthDay = 23;
        else if (month[i] == "June")
          FirstEthDay = 24;
        else if (month[i] == "July")
          FirstEthDay = 24;
        else if (month[i] == "August")
          FirstEthDay = 25;
        else if (month[i] == "September")
          FirstEthDay = 26;
        else if (month[i] == "October")
          FirstEthDay = 21;
        else if (month[i] == "November")
          FirstEthDay = 22;
        else if (month[i] == "December")
          FirstEthDay = 22;
        ethdays = (7 - current) + FirstEthDay;

        if (MonthDays == 31)
        {
          if (current == 0)
            space = 4;
          if (current == 1)
            space = 3;
          if (current == 2)
            space = 2;
          if (current == 3)
            space = 1;
          if (current == 4)
            space = 0;
          if (current == 5)
            space = 6;
          if (current == 6)
            space = 5;
        }
        else if (MonthDays == 30)
        {
          if (current == 0)
            space = 5;
          if (current == 1)
            space = 4;
          if (current == 2)
            space = 3;
          if (current == 3)
            space = 2;
          if (current == 4)
            space = 1;
          if (current == 5)
            space = 0;
          if (current == 6)
            space = 6;
        }
        else if (MonthDays == 29)
        {
          if (current == 0)
            space = 6;
          if (current == 1)
            space = 5;
          if (current == 2)
            space = 4;
          if (current == 3)
            space = 3;
          if (current == 4)
            space = 2;
          if (current == 5)
            space = 1;
          if (current == 6)
            space = 0;
        }
        else if (MonthDays == 28)
        {
          if (current == 0)
            space = 0;
          if (current == 1)
            space = 6;
          if (current == 2)
            space = 5;
          if (current == 3)
            space = 4;
          if (current == 4)
            space = 3;
          if (current == 5)
            space = 2;
          if (current == 6)
            space = 1;
        }

        cout << "|";
        for (int i = 0; i < 55; i++)
          cout << "-";
        cout << "|" << endl
             << endl;
        cout << "|";
        cout << "Sun    |Mon    |Tue    |Wed    |Thu    |Fri    |Sat    |" << endl
             << endl;
        cout << "|";
        for (int i = 0; i < 55; i++)
          cout << "-";
        cout << "|" << endl
             << endl;

        if (current > 5)
        {
          if (month[i] == "February")
          {
            row = 5;
          }
          else if (MonthDays == 30)
          {
            row = 5;
          }
          else if (MonthDays == 31)
            row = 6;
        }
        else

          row = 5;

        int k;

        for (k = 0; k < current; k++)
        {
          cout << "|";
          cout << "\t";
        }
        if (month[i] == "September")
        {
          count = 17;
          row = 3;
          MonthDays = 31;
        }
        for (int x = 0; x < row; x++)
        {

          if (month[i] == "September")
          {

            if (x == 0)
            {

              for (int l = 1; l < count; l++)
              {
                if (l >= 3 && l <= 13)
                  continue;
                cout << "|" << setw(7) << l;
              }
              cout << "|";
              cout << endl;
              cout << endl;
              for (k = 0; k < current; k++)
              {
                cout << "|";
                cout << "\t";
              }
              cout << "|";
              for (int z = FirstEthDay; z < (7 - current) + FirstEthDay; z++)
              {
                cout << z << "\t" << "|";
              }
            }
            else
            {

              for (int j = 0; j < 7; j++)
              {

                cout << "|" << setw(7) << count;
                count++;
                if (count >= MonthDays)
                {
                  for (k = 0; k <= space; k++)
                  {
                    cout << "|";
                    cout << "\t";
                  }

                  break;
                }
              }
              cout << "|";

            cout << endl;
            cout << endl;

            cout << "|";

            for (int z = 0; z < 7; z++)
            {
              cout << ethdays << "\t" << "|";
             
              
              
              
              

              if (ethdays >= 30){
                 ethdays = 0;
              }
              
                
              ethcounter++;
              ethdays++;
            }
            }
          }
          else
          {
            if (x == 0)
            {

              for (int l = 1; l <= count; l++)
              {
                cout << "|" << setw(7) << l;
              }
            }
            else
            {
              for (int j = 0; j < 7; j++)
              {
                count++;
                cout << "|" << setw(7) << count;

                if (count >= MonthDays)
                {
                  for (k = 0; k < space; k++)
                  {
                    cout << "|";
                    cout << "\t";
                  }
                  break;
                }
              }
            }
          }
          cout << "|";
          cout << endl
               << endl;
          cout << "|";
          int ethcounter = 0;

          for (int z = 0; z < 7; z++)
          {
            cout << ethdays << "\t" << "|";
            if (ethdays >= 30)
              ethdays = 0;
            ethcounter++;
            ethdays++;
            if (ethcounter >= 29)
            {
              break;
            }
          }
           cout<<endl;
           cout<<"|";
          for (int i = 0; i < 55; i++)
            cout << "-";
          cout << "|" << endl;
          cout << endl;
        }
        cout << endl;
        i++;
      }
    }

    else
    {

      while (i <= 11)
      {

        if (i == 0)
        {
          cout << month[i] << "\t\tTahisas - Tir" << endl
               << endl;
        }
        else if (i == 1)
        {
          cout << month[i] << "\t\tTir - Yekatit" << endl
               << endl;
        }
        else if (i == 2)
        {
          cout << month[i] << "\t\tYekatit - Megabit" << endl
               << endl;
        }
        else if (i == 3)
        {
          cout << month[i] << "\t\tMegabit - Miyazya" << endl
               << endl;
        }
        else if (i == 4)
        {
          cout << month[i] << "\t\tMiyazya - Ginbot" << endl
               << endl;
        }
        else if (i == 5)
        {
          cout << month[i] << "\t\tGinbot - Sene" << endl
               << endl;
        }
        else if (i == 6)
        {
          cout << month[i] << "\t\tSene - Hamle" << endl
               << endl;
        }
        else if (i == 7)
        {
          cout << month[i] << "\t\tHamle - Nehase" << endl
               << endl;
        }
        else if (i == 8)
        {
          cout << month[i] << "\t\tNehase - Pagume - Meskerem" << endl
               << endl;
        }
        else if (i == 9)
        {
          cout << month[i] << "\t\tMeskerem - Tikimt" << endl
               << endl;
        }
        else if (i == 10)
        {
          cout << month[i] << "\t\tTikimt - Hidar" << endl
               << endl;
        }
        else if (i == 11)
        {
          cout << month[i] << "\t\tHidar - Tahisas" << endl
               << endl;
        }

        if (year < 1752)
          CenturyCode = (18 - (year / 100)) % 7;
        else if (year >= 1752 && year < 1800)
          CenturyCode = 4;
        else if (year >= 1800 && year < 1900)
          CenturyCode = 2;
        else if (year >= 1900 && year < 2000)
          CenturyCode = 0;
        else if (year >= 2000 && year < 2100)
          CenturyCode = 6;
        else if (year >= 2100 && year < 2200)
          CenturyCode = 4;
        else if (year >= 2200 && year < 2300)
          CenturyCode = 2;
        else if (year >= 2300 && year < 2400)
          CenturyCode = 0;

        if (month[i] == "January")
          MonthCode = 0;
        else if (month[i] == "February")
          MonthCode = 3;
        else if (month[i] == "March")
          MonthCode = 3;
        else if (month[i] == "April")
          MonthCode = 6;
        else if (month[i] == "May")
          MonthCode = 1;
        else if (month[i] == "June")
          MonthCode = 4;
        else if (month[i] == "July")
          MonthCode = 6;
        else if (month[i] == "August")
          MonthCode = 2;
        else if (month[i] == "September")
          MonthCode = 5;
        else if (month[i] == "October")
          MonthCode = 0;
        else if (month[i] == "November")
          MonthCode = 3;
        else if (month[i] == "December")
          MonthCode = 5;

        YearKey = year % 100;
        quarter = YearKey / 4;

        YearCode = (YearKey + quarter) % 7;

        date = 1;

        if (year >= 1752)
        {

          if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            GregLeapYear = true;

          else
            GregLeapYear = false;
        }
        else
        {
          if (year % 4 == 0)
            GregLeapYear = true;

          else
            GregLeapYear = false;
        }

        if (GregLeapYear == true)
          if (month[i] == "January" || month[i] == "February")
            FirstDay = (YearCode + CenturyCode + date + MonthCode - 1) % 7;
          else
            FirstDay = (YearCode + CenturyCode + date + MonthCode) % 7;

        else
          FirstDay = (YearCode + CenturyCode + date + MonthCode) % 7;

        if (month[i] == "January")
          MonthDays = 31;
        else if (month[i] == "February")
        {
          if (GregLeapYear == true)
            MonthDays = 29;
          else
            MonthDays = 28;
        }
        else if (month[i] == "March")
          MonthDays = 31;
        else if (month[i] == "April")
          MonthDays = 30;
        else if (month[i] == "May")
          MonthDays = 31;
        else if (month[i] == "June")
          MonthDays = 30;
        else if (month[i] == "July")
          MonthDays = 31;
        else if (month[i] == "August")
          MonthDays = 31;
        else if (month[i] == "September")
          MonthDays = 30;
        else if (month[i] == "October")
          MonthDays = 31;
        else if (month[i] == "November")
          MonthDays = 30;
        else if (month[i] == "December")
          MonthDays = 31;

        int current = FirstDay;
        int count = 0;
        count = 7 - current;
        int row;
        int space;
        int ethdays = 0;
        int FirstEthDay = 0;

        int ethcounter = 0;

        if (month[i] == "January")
          FirstEthDay = 23;
        else if (month[i] == "February")
          FirstEthDay = 24;
        else if (month[i] == "March")
          FirstEthDay = 22;
        else if (month[i] == "April")
          FirstEthDay = 23;
        else if (month[i] == "May")
          FirstEthDay = 23;
        else if (month[i] == "June")
          FirstEthDay = 24;
        else if (month[i] == "July")
          FirstEthDay = 24;
        else if (month[i] == "August")
          FirstEthDay = 25;
        else if (month[i] == "September")
          FirstEthDay = 26;
        else if (month[i] == "October")
          FirstEthDay = 21;
        else if (month[i] == "November")
          FirstEthDay = 22;
        else if (month[i] == "December")
          FirstEthDay = 22;

        if (MonthDays == 31)
        {
          if (current == 0)
            space = 4;
          if (current == 1)
            space = 3;
          if (current == 2)
            space = 2;
          if (current == 3)
            space = 1;
          if (current == 4)
            space = 0;
          if (current == 5)
            space = 6;
          if (current == 6)
            space = 5;
        }
        else if (MonthDays == 30)
        {
          if (current == 0)
            space = 5;
          if (current == 1)
            space = 4;
          if (current == 2)
            space = 3;
          if (current == 3)
            space = 2;
          if (current == 4)
            space = 1;
          if (current == 5)
            space = 0;
          if (current == 6)
            space = 6;
        }
        else if (MonthDays == 29)
        {
          if (current == 0)
            space = 6;
          if (current == 1)
            space = 5;
          if (current == 2)
            space = 4;
          if (current == 3)
            space = 3;
          if (current == 4)
            space = 2;
          if (current == 5)
            space = 1;
          if (current == 6)
            space = 0;
        }
        else if (MonthDays == 28)
        {
          if (current == 0)
            space = 0;
          if (current == 1)
            space = 6;
          if (current == 2)
            space = 5;
          if (current == 3)
            space = 4;
          if (current == 4)
            space = 3;
          if (current == 5)
            space = 2;
          if (current == 6)
            space = 1;
        }

        ethdays = ((7 - current) + FirstEthDay);
        if (ethdays > 30)
          ethdays = ethdays - 30;
        cout << "|";
        for (int i = 0; i < 55; i++)
          cout << "-";
        cout << "|" << endl
             << endl;
        cout << "|";
        cout << "Sun    |Mon    |Tue    |Wed    |Thu    |Fri    |Sat    |" << endl
             << endl;
        cout << "|";
        for (int i = 0; i < 55; i++)
          cout << "-";
        cout << "|" << endl
             << endl;

        if (current >= 5)
        {
          if (month[i] == "February")
          {

            row = 5;
          }
          else if (MonthDays == 30)
          {
            if (current == 6)
              row = 6;
            else
              row = 5;
          }
          else if (MonthDays == 31)
            row = 6;
        }
        else
          row = 5;

        int k;

        for (k = 0; k < current; k++)
        {

          cout << "|";
          cout << "\t";
        }
        for (int i = 0; i < row; i++)
        {

          if (i == 0)
          {

            for (int l = 1; l <= count; l++)
            {
              cout << "|" << setw(7) << l;
            }
            cout << "|";
            cout << endl;
            cout << endl;
            for (k = 0; k < current; k++)
            {
              cout << "|";
              cout << "\t";
            }
            cout << "|";
            for (int z = FirstEthDay; z < (7 - current) + FirstEthDay; z++)
            {
              if (z > 30){
                 for(int i = 1; i < ethdays; i++ )
                   cout << i << "\t" << "|";
                  break;
              }
              
              cout << z << "\t" << "|";
            }
          }

          else
          {
             
            for (int j = 0; j < 7; j++)
            {
              count++;
              cout << "|" << setw(7) << count;

              if (count >= MonthDays)
              {
                for (k = 0; k < space; k++)
                {
                  cout << "|";
                  cout << "\t";
                }

                break;
              }
            }
            cout << "|";

            cout << endl;
            cout << endl;

            cout << "|";

            for (int z = 0; z < 7; z++)
            {
              cout << ethdays << "\t" << "|";
             
              if (MonthDays == 31)
              {
                if (ethcounter > (29 - (7 - current)))
                {
                  for (k = 0; k < space; k++)
                  {
                    cout << "\t";
                    cout << "|";
                  }
                  break;
                }
              }
              else if (MonthDays == 30)
              {
                if (ethcounter > (28 - (7 - current)))
                {
                  for (k = 0; k < space; k++)
                  {
                    cout << "\t";
                    cout << "|";
                  }
                  break;
                }
              }

              if (ethdays >= 30){
                 ethdays = 0;
              }
              
                
              ethcounter++;
              ethdays++;
            }
          }

          cout << endl
               << endl;
          cout << "|";
          for (int i = 0; i < 55; i++)
            cout << "-";
          cout << "|" << endl;
          cout << endl;
        }
        cout << endl;
        i++;
      }
    }

    cout << "\n\nDo you want to do this again?(Y/N): ";
    cin >> response;

  } while (response == 'Y' || response == 'y');

  return 0;
}
