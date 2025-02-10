#include <stdio.h>

int main() {
    // Define image size
    int width = 20000, height = 20000;

    // Open a file for writing
    FILE *fp = fopen("output.ppm", "w");
    if (!fp) {
        perror("Failed to open file");
        return 1;
    }

    // Write PPM header
    fprintf(fp, "P3\n%d %d\n255\n", width, height);

    // Write pixel data (pure red)
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            fprintf(fp, "255 0 0 "); // Red color (R=255, G=0, B=0)
        }
        fprintf(fp, "\n");
    }

    // Close the file
    fclose(fp);

    printf("PPM file 'output.ppm' created successfully!\n");
    return 0;
}

