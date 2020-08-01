# include <stdio.h>

int main() {
    int length, breadth;
    printf("Enter the length of the rectangle: \n");
    scanf("%d", &length);
    printf("Enter the breadth of the rectangle: \n");
    scanf("%d", &breadth);
    printf("Area of the rectangle: %d", length*breadth);

    return 0;
}