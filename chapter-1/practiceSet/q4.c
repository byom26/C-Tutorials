# include <stdio.h>

int main() {
    int principal=1000, rate=4, years=1;
    int si = (principal * rate * years)/100;
    printf("The value Simple Interest: %d", si);
    return 0;
}