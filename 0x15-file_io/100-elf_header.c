#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void test_elf(unsigned char *e_ident);
void print_magic_num(unsigned char *e_ident);
void print_class_elf(unsigned char *e_ident);
void print_data_elf(unsigned char *e_ident);
void print_version_elf(unsigned char *e_ident);
void print_abi_elf(unsigned char *e_ident);
void print_osabi_elf(unsigned char *e_ident);
void print_type_elf(unsigned int e_type, unsigned char *e_ident);
void print_entry_elf(unsigned long int e_entry, unsigned char *e_ident);
void close_elf_hdr(int elf);

/**
 * test_elf -  Determines whether a file is an ELF file.
 * @e_ident:  pointer to an list of ELF magic numbers.
 *
 * Description: If  file  not an ELF file - exit code 98.
 */
void test_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic_num - Outputs the ELF header's magic numbers to the console.
 * @e_ident: pointer to an list of ELF magic numbers.
 *
 * Description: The magic numbers are printed with spaces in between them.
 */
void print_magic_num(unsigned char *e_ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class_elf - Outputs the ELF header's class to the console.
 * @e_ident: pointer to an list of ELF magic numbers.
 */
void print_class_elf(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data_elf - Outputs the ELF header's data information to the console.
 * @e_ident: pointer to an list of ELF magic numbers.
 */
void print_data_elf(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_version_elf - Outputs the version information of an ELF header.
 * @e_ident: pointer to an list of ELF magic numbers.
 */
void print_version_elf(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi_elf- Outputs the OS/ABI information from an ELF header.
 * @e_ident: pointer to an list of ELF magic numbers.
 */
void print_osabi_elf(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * print_abi_elf - Displays the ABI version information from an ELF header.
 * @e_ident: pointer to an list of ELF magic numbers.
 */
void print_abi_elf(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * print_type_elf -Outputs the type information of an ELF header.
 * @e_type: The ELF.
 * @e_ident: pointer to an list of ELF magic numbers.
 */
void print_type_elf(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry_elf - Outputs the entry point information of an ELF header.
 * @e_entry: pointer ELF entry point.
 * @e_ident:  pointer to an list of ELF magic numbers.
 */
void print_entry_elf(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * close_elf_hdr - exit  ELF file.
 * @elf: The file description of ELF file.
 *
 * Description: If the file cannot be exit - exit code 98.
 */
void close_elf_hdr(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - show  information contain in the
 * ELF header at the begin of ELF file.
 * @argc: The number of arguments.
 * @argv: An list of pointers.
 *
 * Return: 0 for success.
 *
 * Description: test  file is not  ELF File or
 * the function fail - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf_hdr(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		close_elf_hdr(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	test_elf(header->e_ident);
	printf("ELF Header:\n");
	print_magic_num(header->e_ident);
	print_class_elf(header->e_ident);
	print_data_elf(header->e_ident);
	print_version_elf(header->e_ident);
	print_osabi_elf(header->e_ident);
	print_abi_elf(header->e_ident);
	print_type_elf_elf(header->e_type, header->e_ident);
	print_entry_elf(header->e_entry, header->e_ident);

	free(header);
	close_elf_hdr(o);
	return (0);
}
