# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <elf.h>
# include <sys/types.h>

static void p_magic(unsigned char *s);
static void is_elf(unsigned char *);
void p_class(unsigned char *s);
void p_data(unsigned char *s);
void p_ver(u_int32_t);
void p_os(unsigned char *);
void p_type(uint16_t t);
void p_addr(Elf64_Addr);
void close_h(ssize_t fd);
/**
 * main - display elf infomation contain in a file
 * @ac: size of array av
 * @av: size of array ac
 * Return: 0 success
 */

int main(int ac, char **av)
{
	Elf64_Ehdr *elfheader = malloc(sizeof(Elf64_Ehdr));
	ssize_t hfd, rd;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elfheader fileexe\n");
		exit(98);
	}
	if (!elfheader)
	{
		dprintf(STDERR_FILENO, "Error: Heap unable to allocate memory\n");
		exit(98);
	}
	hfd = open(*(av + 1), O_RDONLY);
	if (hfd == -1)
	{
		free(elfheader);
		dprintf(STDERR_FILENO, "Error: Unable to open file %s\n", *(av + 1));
		exit(98);
	}
	rd = read(hfd, elfheader, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		close_h(hfd);
		free(elfheader);
		dprintf(STDERR_FILENO, "Error: Unable to read from fildes %lu", hfd);
		exit(98);
	}
	is_elf(elfheader->e_ident);
	p_magic(elfheader->e_ident);
	p_class(elfheader->e_ident);
	p_data(elfheader->e_ident + 6);
	p_ver(elfheader->e_version);
	p_os(elfheader->e_ident + 8);
	p_type(elfheader->e_type);
	p_addr(elfheader->e_entry);
	close_h(hfd);
	free(elfheader);
	exit(0);
}

/**
 * is_elf - check the value of character bytes of e_ident
 * @s: pointer to string
 */

void is_elf(unsigned char *s)
{
	if (*(s) == ELFMAG0 && *(++s) == ELFMAG1 && *(++s) == ELFMAG2 &&
			*(++s) == ELFMAG3)
		return;
	dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
	exit(98);
}

/**
 * p_magic - print magic value of Executable Linkable Format
 * @s: char to print magic
 */

void p_magic(unsigned char *s)
{
	unsigned int i = 0;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	while (i < 16)
		if (i < 15)
			printf("%02x ", *(s + i++));
		else
			printf("%02x\n", *(s + i++));
}

/**
 * p_class - print p_class
 * @s: points to the 5 byte of e_ident
 */
void p_class(unsigned char *s)
{
	switch (s[EI_CLASS])
	{
		case ELFCLASS32:
			printf("  Class:                             ELF32\n");
			break;
		case ELFCLASS64:
			printf("  Class:                             ELF64\n");
			break;
		default:
			printf("  Class:                             ELFNONE\n");
			break;
	}

}

/**
 * p_data - print ELF data types
 * @s: point to e_ident 6th byte
 */
void p_data(unsigned char *s)
{
	printf("  Data:                              ");
	switch (*s)
	{
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("unknown data format\n");
			break;
	}
}

/**
 * p_ver - print EI_VERSION
 * @v: EI_VERSION
 */

void p_ver(uint32_t v)
{
	printf("  Version:                           ");
	if (v == EV_CURRENT)
		printf("%u (current)\n", v);
	else
		printf("%u (unknown)\n", v);
}

/**
 * p_os - print operating system and ABI to which the object is targeted
 * @s: pointer to string
 */

void p_os(unsigned char *s)
{
	printf("  OS/ABI:                            ");
	switch (*s)
	{
		case ELFOSABI_LINUX:
			printf("Linux ABI\n");
			break;
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("HP-UX ABI\n");
			break;
		case ELFOSABI_NETBSD:
			printf("NetBSD ABI\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("Solaris ABI\n");
			break;
		case ELFOSABI_TRU64:
			printf("TRU64 UNIX ABI\n");
			break;
		case ELFOSABI_ARM_AEABI:
			printf("ARM architecture ABI\n");
			break;
		default:
			printf("unknown ABI\n");
			break;
	}
	printf("  ABI Version:                       %u\n", *(s + 1));
}

/**
 * p_type - print p_type
 * @t: p_type
 */

void p_type(uint16_t t)
{
	printf("  Type:                              ");
	switch (t)
	{
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		default:
			printf("NONE (Unknown file)\n");
			break;
	}
}

/**
 * p_addr - prints entry p_addr
 * @addr: address
 */

void p_addr(Elf64_Addr addr)
{
	printf("  Entry point address:               %#llx\n", addr);
}

/**
 * close_h - closes a file description
 * @fd: file des to close
 */

void close_h(ssize_t fd)
{
	int cfd = close(fd);

	if (cfd == -1)
	{
		dprintf(STDERR_FILENO, "Error: fildes refuse to close %i\n", cfd);
		exit(98);
	}
}
