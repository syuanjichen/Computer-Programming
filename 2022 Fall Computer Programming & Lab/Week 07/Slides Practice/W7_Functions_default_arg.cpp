#include <iostream>
#include <cstdio>

using namespace std;

void commute_time (double, double = 25.0, int = 5);

int main(void)
{
    commute_time(40);
    commute_time(20, 8);
    commute_time(35, 30, 8);
}

void commute_time(double velocity, double distance, int num_lights)
{
    printf("The commute time is %lf hours.\n", (distance / velocity) + num_lights * 0.05);
}