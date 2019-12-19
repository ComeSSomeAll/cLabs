#include "stdio.h"
#include "time.h"

int main(int argc, char* argv[])
{
    char* fileName = argv[1];
    freopen(fileName, "w", stdout);

    time_t timer = time(NULL);
    for (int i = 0; i < 10; ++i)
    {
        struct tm* dateTime = localtime(&timer);
        char strDateTime[40] = {0};
        strftime(strDateTime, 40, "%d.%m.%Y", dateTime);
        printf("%s\n", strDateTime);
        timer += 24 * 60 * 60;
    }
}