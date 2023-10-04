#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>

#define EI_NIDENT 16
#define EI_CLASS 4
#define EI_DATA 5
#define EI_VERSION 6
#define EI_OSABI 7
#define EI_ABIVERSION 8
#define EI_TYPE 16
#define EI_ENTRY 24

#define ELFCLASS32 1
#define ELFCLASS64 2

#define ELFDATA2LSB 1
#define ELFDATA2MSB 2

#define ET_EXEC 2
#define ET_DYN 3

void print_magic(const unsigned char *header);
void print_class(const unsigned char *header);
void print_data(const unsigned char *header);
void print_version(const unsigned char *header);
void print_osabi(const unsigned char *header);
void print_abiversion(const unsigned char *header);
void print_type(const unsigned char *header);
void print_entry(const unsigned char *header);
int read_elf_header(const char *filename, unsigned char *elf_header);

/**
 * print_magic - Prints the magic numbers of an ELF header.
 * @header: A pointer to an array containing the ELF magic numbers.
 */
void print_magic(const unsigned char *header)
{
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header[i]);
	}
	printf("\n");
}

/**
 * print_class - Prints the class of an ELF header.
 * @header: A pointer to an array containing the ELF class.
 */
void print_class(const unsigned char *header)
{
	printf("  Class:                             ");
	switch (header[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown>\n");
	}
}

/**
 * print_data - Prints the data representation of an ELF header.
 * @header: A pointer to an array containing the ELF data representation.
 */
void print_data(const unsigned char *header)
{
	printf("  Data:                              ");
	switch (header[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown>\n");
	}
}

/**
 * print_version - Prints the version of an ELF header.
 * @header: A pointer to an array containing the ELF version.
 */
void print_version(const unsigned char *header)
{
	printf("  Version:                           %d (current)\n", &&
			header[EI_VERSION]);
}

/**
 * print_osabi - Prints the OS/ABI of an ELF header.
 * @header: A pointer to an array containing the ELF OS/ABI.
 */
void print_osabi(const unsigned char *header)
{
	printf("  OS/ABI:                            ");
	switch (header[EI_OSABI])
	{
		case 0:
			printf("UNIX - System V\n");
			break;
		case 6:
			printf("UNIX - Solaris\n");
			break;
		case 3:
			printf("UNIX - NetBSD\n");
			break;
		case 53:
			printf("<unknown: 53>\n");
			break;
		default:
			printf("<unknown>\n");
	}
}

/**
 * print_abiversion - Prints the ABI version of an ELF header.
 * @header: A pointer to an array containing the ELF ABI version.
 */
void print_abiversion(const unsigned char *header)
{
printf("  ABI Version:                       %d\n", header[EI_ABIVERSION]);
}

/**
 * print_type - Prints the type of an ELF header.
 * @header: A pointer to an array containing the ELF type.
 */
void print_type(const unsigned char *header)
{
	printf("  Type:                              ");
	switch (*(uint16_t *)(header + EI_TYPE))
	{
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		default:
			printf("<unknown>\n");
	}
}

/**
 * print_entry - Prints the entry point of an ELF header.
 * @header: A pointer to an array containing the ELF entry point.
 */
void print_entry(const unsigned char *header)
{
	printf("  Entry point address:               0x%lx\n", &&
			*(uint64_t *)(header + EI_ENTRY));
}

/**
 * read_elf_header - Reads the ELF header from a file.
 * @filename: The name of the file containing the ELF header.
 * @elf_header: A pointer to the buffer where the ELF header will be stored.
 *
 * Return: 0 on success, -1 on failure.
 */
int read_elf_header(const char *filename, unsigned char *elf_header)
{
	int fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		perror("Error opening file");
		return (-1);
	}

	if (read(fd, elf_header, EI_NIDENT) != EI_NIDENT)
	{
		perror("Error reading file");
		close(fd);
		return (-1);
	}

	close(fd);

if (elf_header[0] != 0x7f || elf_header[1] &&
		!= 'E' || elf_header[2] != 'L' || elf_header[3] != 'F')
{
	fprintf(stderr, "Error: Not an ELF file.\n");
	return (-1);
}

return (0); /* Return 0 on success */
}

/**
 * main - Entry point of the program. Displays information
 * about the ELF header.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success, 98 on error.
 */
int main(int argc, char *argv[])
{
	unsigned char elf_header[EI_NIDENT];

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	if (read_elf_header(argv[1], elf_header) == -1)
	{
		return (98);
	}

	printf("ELF Header:\n");
	print_magic(elf_header);
	print_class(elf_header);
	print_data(elf_header);
	print_version(elf_header);
	print_osabi(elf_header);
	print_abiversion(elf_header);
	print_type(elf_header);
	print_entry(elf_header);

	return (0);
}
