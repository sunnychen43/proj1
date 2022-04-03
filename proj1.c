#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char *line = NULL;
    size_t len = 0;
    ssize_t read;

    fp = fopen("random.txt", "r");
    if (fp == NULL)
        exit(1);
    
    int max = 0, sum = 0, lines = 0;
    while ((read = getline(&line, &len, fp)) != -1) {
        lines++;
        int num = atoi(line);
        max = (num > max) ? num : max;
        sum += num;
    }

    printf("Average: %.2f\n", (float)sum / lines);
    printf("Max: %d\n", max);

    return 0;
}