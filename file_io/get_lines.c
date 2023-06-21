// Get num lines in a file
FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Failed to open the file.\n");
        return 1;
    }

    int line_count = 0;
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            line_count++;
        }
    }

    printf("Number of lines in the file: %d\n", line_count);

    fclose(file);

    return 0;

// Get file size
