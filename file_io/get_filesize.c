FILE FILE *stream;
	// Open file tickers.txt
	if ((stream = fopen("tickers.txt", "r")) == NULL) {
		perror("Could not open file");
		exit(EXIT_FAILURE);
	}

	fseek(stream, 0, SEEK_END);	// Move pointer to end of file
	long file_size = ftell(stream);	// file size = 221
	fseek(stream, 0, SEEK_SET);	// Move pointer back to start of file
	