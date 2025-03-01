#include "epoch.h"
#include <string>

/* Your code here! */
int hours(time_t t) {
    int hour_time = t/3600;
    return hour_time;
}

int days(time_t t) {
    int day_time = t/86400;
    return day_time;
}

int years(time_t t) {
    int year_time = t/31536000;
    return year_time;
}