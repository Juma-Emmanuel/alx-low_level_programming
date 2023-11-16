#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_error - Print an error message to stderr.
 * @message: The error message to print.
 */
void print_error(const char *message)
{
	fprintf(stderr, "Error: %s\n", message);
}

/**
 * display_elf_header_info - Display information from the ELF header.
 * @header: A pointer to the ELF header structure.
 */
void display_elf_header_info(Elf64_Ehdr *header)
{
	int i;

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("  e_ident[%d] = 0x%02x\n", i, header->e_ident[i]);
	}

	printf("  Entry point address: %#lx\n", header->e_entry);
}

/**
 * open_file - Open an ELF file and return the file descriptor.
 * @filename: The name of the ELF file to open.
 * Return: The file descriptor on success, or exit on failure.
 */
int open_file(const char *filename)
{
	int file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
	{
		print_error("Can't read file");
		exit(98);
	}

	return (file_descriptor);
}

/**
 * read_elf_header - Read the ELF header from the file.
 * @file_descriptor: The file descriptor of the ELF file.
 * @header: A pointer to the ELF header structure.
 * Return: The number of bytes read on success, or exit on failure.
 */
ssize_t read_elf_header(int file_descriptor, Elf64_Ehdr *header)
{
	ssize_t bytes_read = read(file_descriptor, header, sizeof(Elf64_Ehdr));

	if (bytes_read == -1 || bytes_read < sizeof(Elf64_Ehdr))
	{
		print_error("Failed to read ELF header");
		close(file_descriptor);
		exit(98);
	}

	return (bytes_read);
}

/**
 * validate_elf_file - Validate that the file is a valid ELF file.
 * @header: A pointer to the ELF header structure.
 */
void validate_elf_file(Elf64_Ehdr *header)
{
	if (header->e_ident[EI_MAG0] != ELFMAG0 ||
	    header->e_ident[EI_MAG1] != ELFMAG1 ||
	    header->e_ident[EI_MAG2] != ELFMAG2 ||
	    header->e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Not an ELF file");
		exit(98);
	}
}

/**
 * main - The main entry point of the program.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		print_error("Usage: ./elf_header <elf_filename>");
		exit(98);
	}

	int file_descriptor = open_file(argv[1]);

	Elf64_Ehdr header;
	ssize_t bytes_read = read_elf_header(file_descriptor, &header);

	validate_elf_file(&header);
	display_elf_header_info(&header);

	close(file_descriptor);

	return (0);
}
