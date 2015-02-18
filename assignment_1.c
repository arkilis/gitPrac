#include "assignment_1.h"

int main()
{
    char *image_data;
    int width, height;

    read_image("test.pgm", &image_data, &width, &height);
    printf("Image Data:%s\n", *image_data);
    printf("Width:%d\n", width);
    printf("Height:%d\n", height);
    
}
