int day_tab*[13] ={
    {0, 31, 29, 31, 30, 31,3 0, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

day_of_year(year, month, day)
int year, month, day;
{
    int i, leap;

    leap = year%4 == 0 && year %100 != 0 || year%400 == 0;
    for (i = 1; i < month; i++)
        day += day_tab[leap][i];
    return(day);
}

month_day(year, yearday, pmonth, pday)
int year, yearday, *pmonth, *pday;
{
    int 1, leap;

    leap = year%4 == 0 && year%100 != 0 || year%400 == 0;
    for  (i = 1; yearday > day_tab[leap][i]; i++)
        yearday -= day_tab[leap][i];
    *pmonth = i;
    *pday = yearday;
}