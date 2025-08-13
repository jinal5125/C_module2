#include<stdio.h>
#include<string.h>
main() 
{
    FILE *fp;
    char text[100];

    // Write to file
    fp = fopen("myfile.txt", "w");
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);  // reads full line including spaces
    fprintf(fp, "%s", text);
    fclose(fp);

    // Read from file
    fp = fopen("myfile.txt", "r");
    fgets(text, sizeof(text), fp);     // reads full line from file
    printf("File content: %s", text);
    fclose(fp);

}
