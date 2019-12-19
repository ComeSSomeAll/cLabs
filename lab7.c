#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum weekdays {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};

struct triangle {
    float x1;
    float x2;
    float x3;
    float y1;
    float y2;
    float y3;
    float a, b, c;
    float P;
}tre;
int main() {
    enum weekdays a, b, c, d, e, f, g;
    a = Monday;
    b = Tuesday;
    c = Wednesday;
    d = Thursday;
    e = Friday;
    f = Saturday;
    g = Sunday;
    printf("%d", a);

    tre.x1 = 2;
    tre.x2 = 5;
    tre.x3 = 8;
    tre.y1 = 3;
    tre.y2 = 7;
    tre.y3 = 2;
    tre.a = sqrt(pow(tre.x2 - tre.x1, 2) + pow(tre.y2 - tre.y1, 2));
    tre.b = sqrt(pow(tre.x3 - tre.x2, 2) + pow(tre.y3 - tre.y2, 2));
    tre.c = sqrt(pow(tre.x3 - tre.x1, 2) + pow(tre.y3 - tre.y1, 2));
    tre.P = tre.a + tre.b + tre.c;
    printf("%.2f\n", tre.P);

    struct mp3 {
        unsigned int play : 1;
        unsigned int pause : 1;
        unsigned int record : 1;
    };
    union Ump3 {
        struct mp3 mp;
        int i;
    }reader;
    printf("\nEnter number for MP3 status: ");
    scanf("%x", &reader.i);
    printf("\MP3 status:\nplay: %d\n pause: % d\nrecord : % d\n\a\n\n",
           reader.mp.play, reader.mp.pause,
           reader.mp.record);
}