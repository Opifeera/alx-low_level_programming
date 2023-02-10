/*********************0x15. C - File I/O*********************/

0-read_textfile.c: Write a function that reads a text file and prints it to the POSIX standard output

1-create_file.c: Create a function that creates a file
	where filename is the name of the file to create and text_content is a NULL terminated string to write to the file
	Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…)
	The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
	if the file already exists, truncate it
	if filename is NULL return -1
	if text_content is NULL create an empty file

2-append_text_to_file.c: Write a function that appends text at the end of a file.

	Prototype: int append_text_to_file(const char *filename, char *text_content);
	where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file
	Return: 1 on success and -1 on failure
	Do not create the file if it does not exist
	If filename is NULL return -1
	If textcontent is NULL, do not add anything to the file. Return 1 if the file exists and -1 if the file does not exist or if you do not have the required permissions to write the file

3-cp.c:  program that copies the content of a file to another file.

100-elf_header.c: program that displays the information contained in the ELF header at the start of an ELF file.
