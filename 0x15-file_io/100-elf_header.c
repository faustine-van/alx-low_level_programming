#include <stdio.h>
#include <elf.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 *get_class - get fifth byte identifies the architecture for this binary
 *@class: argument to be used
 *Return: class
 */
const char *get_class(unsigned char class)
{
	switch (class)
	{
		case ELFCLASSNONE:
			return ("This class is invalid.");
		case ELFCLASS32:
			return ("ELF32");
		case ELFCLASS64:
			return ("ELF64");
		default:
			return ("");
	}
}
/**
 *get_data - sixth byte specifies the data encoding of the processor-specific
 *data  in  the  file.
 *@data: argument to be used
 *Return: data
 */
const char *get_data(unsigned char data)
{
	switch (data)
	{
		case ELFDATA2LSB:
			return ("2's complement, little endian");
		case ELFDATA2MSB:
			return ("2's complement, big endian");
		case  ELFDATANONE:
			return ("Unknown data format");
		default:
			return ("");
	}
}
/**
 *get_OSABI - eighth byte identifies the operating system and ABI to which
 *the  object  is  targeted.
 *@OSABI: argument to get EI_OSABI
 *Return: OSABI
 */
const char *get_OSABI(unsigned char OSABI)
{
	switch (OSABI)
	{
		case ELFOSABI_SYSV:
			return ("UNIX System V ABI");
		case  ELFOSABI_HPUX:
			return ("HP-UX ABI");
		case ELFOSABI_NETBSD:
			return ("NetBSD ABI");
		case ELFOSABI_LINUX:
			return ("Linux ABI");
		case  ELFOSABI_SOLARIS:
			return ("Solaris ABI");
		case ELFOSABI_IRIX:
			return ("IRIX ABI");
		case ELFOSABI_FREEBSD:
			return ("FreeBSD ABI");
		case ELFOSABI_TRU64:
			return ("TRU64 UNIX ABI");
		case ELFOSABI_ARM:
			return ("ARM architecture ABI");
		case ELFOSABI_STANDALONE:
			return ("Stand-alone (embedded) ABI");
		default:
			return ("");
	}
}
/**
 *get_type - the object file type
 *@type: argument to get type
 *Return: type
 */
const char *get_type(unsigned char type)
{
	switch (type)
	{
		case ET_NONE:
			return ("NONE (Unknown type)");
		case ET_REL:
			return ("REL (Relocatable file)");
		case ET_EXEC:
			return ("EXEC (Executable file)");
		case ET_DYN:
			return ("DYN (Shared file)");
		case ET_CORE:
			return ("CORE (Core file)");
		default:
			return ("");

	}
}
/**
 *get_machine - specifies the required architecture for an  individual  file.
 *@machine: argument to get
 *Return: machine
 */
const char *get_machine(unsigned char machine)
{
	switch (machine)
	{
		case EM_NONE:
			return ("An unknown machine");
		case EM_M32:
			return ("AT&T WE 32100");
		case EM_SPARC:
			return ("Sun Microsystems SPARC");
		case EM_386:
			return ("Intel 80386");
		case EM_68K:
			return ("Motorola 68000");
		case EM_88K:
			return ("Motorola 88000");
		case EM_860:
			return ("Intel 80860");
		case EM_MIPS:
			return ("MIPS RS3000 (big-endian only)");
		case EM_PARISC:
			return ("HP/PA");
		case EM_SPARC32PLUS:
			return ("SPARC with enhanced instruction set");
		case EM_PPC:
			return ("PowerPC");
		case EM_PPC64:
			return ("PowerPC 64-bit");
		case EM_S390:
			return ("IBM S/390");
		case EM_ARM:
			return ("Advanced RISC Machines");
		case EM_SH:
			return ("Renesas SuperH");
		case EM_SPARCV9:
			return ("SPARC v9 64-bit");
		case EM_IA_64:
			return ("Intel Itanium");
		case EM_X86_64:
			return ("AMD x86-64");
		case EM_VAX:
			return ("DEC Vax");
		default:
			return ("");
	}
}
/**
 *main - displays the information contained in the ELF header at the
 *start of an ELF file.
 *@ag: argument to get string file
 *@an: number of argument to be passed
 *Return: 0(success)
 */
int main(int an, char **ag)
{
	const char *file = ag[1];
	int fd, fr, a = 0;
	Elf64_Ehdr header;

	if (an != 2)
	{
		dprintf(2, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fr = read(fd, &header, sizeof(header));
	if (fr != sizeof(header))
	{
		dprintf(2, "can't read elf file");
		exit(98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Not an ELF file\n");
	}
	printf("Magic:\t");
	for (a = 0; a < EI_NIDENT; a++)
		printf("%02x ", header.e_ident[a]);
	printf("\nClass: \t\t\t\t\t%s\n", get_class(header.e_ident[EI_CLASS]));
	printf("Data: \t\t\t\t\t%s\n", get_data(header.e_ident[EI_DATA]));
	printf("Version: \t\t\t\t%d (current)\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI: \t\t\t\t%s\n", get_OSABI(header.e_ident[EI_OSABI]));
	printf("ABI Version: \t\t\t\t%d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type: \t\t\t\t\t%s\n", get_type(header.e_type));
	printf("Machine: \t\t\t\t%s\n", get_machine(header.e_machine));
	printf("Version: \t\t\t\t0x%1X\n", header.e_version);
	printf("Entry point address: \t\t\t0x%1lX\n", header.e_entry);
	printf("Start of section headers \t\t%ld (bytes into file)\n",
			header.e_phoff);
	printf("Start of program headers: \t\t%ld (bytes into file)\n",
			header.e_shoff);
	printf("Flags: \t\t\t\t\t0x%1X\n", header.e_flags);
	printf("Size of this header: \t\t\t%d (bytes)\n", header.e_ehsize);
	printf("Size of program headers: \t\t%d (bytes)\n", header.e_phentsize);
	printf("Number of program headers: \t\t%d\n", header.e_phnum);
	printf("Size of section headers: \t\t%d (bytes)\n", header.e_shentsize);
	printf("Number of section headers: \t\t%d\n", header.e_shnum);
	printf("Section header string table index:      %d\n", header.e_shstrndx);
	close(fd);
	return (0);
}
