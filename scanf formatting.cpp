#include <bits/stdc++.h>
using namespace std;


int main() {

    // scape / using %*c 30/01/2018
    int d, m, y;
    scanf("%d %*c %d %*c %d", &d, &m, &y);
    printf("%d %d %d\n", d, m, y);
    puts("");

    // take input up to \n.
    char a[50];
    scanf("%[^\n]", a);
    printf("%s", a);


    // sscanf using
    char inp[50];
    strcpy(inp, "Saturday March 25 1989");
    int day, year;
    char week_day[15], month[15];

    /*    source   format specifier   variables      */
    sscanf(inp,    "%s %s %d %d",     week_day, month, &day, &year);

    printf("%s %d, %d = %s\n", month, day, year, week_day);

    return 0;
}
