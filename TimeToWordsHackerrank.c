int main(){
    int h; 
    scanf("%d",&h);
    int m; 
    scanf("%d",&m);

    char *hours[] = {"one", "two", "three", "four", "five", "six", "seven", 
                    "eight", "nine", "ten", "eleven", "twelve"};

    char *minutes[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", 
                       "eleven", "twelve", "thirteen", "fourteen", "fifteen", 
                       "sixteen", "seventeen", "eighteen", "ninteen", "twenty",
                       "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", 
                       "twenty six", "twenty seven", "twenty eight", "twenty nine"};

    char *hour;

    if (m == 0) {
        hour = hours[h - 1];
        printf("%s o' clock", hour);
    }
    else if (m == 1) {
        hour = hours[h - 1];
        printf("one minute past %s", hour);
    }
    else if (m == 10) {
        hour = hours[h - 1];
        printf("ten minutes past %s", hour);
    }
    else if (m == 15) {
        hour = hours[h - 1];
        printf("quarter past %s", hour);
    }
    else if (m == 30) {
        hour = hours[h - 1];
        printf("half past %s", hour);
    }
    else if (m == 40) {
        hour = hours[h];
        printf("twenty minutes to %s", hour);
    }
    else if (m == 45) {
        hour = hours[h];
        printf("quarter to %s", hour);
    }
    else if (m < 30) {
        hour = hours[h - 1];
        printf("%s minutes past %s", minutes[m - 1], hour);
    }
    else if (m > 30) {
        hour = hours[h];
        printf("%s minutes to %s", minutes[60 - m - 1], hour);
    }

    return 0;
}
