#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

void print_magic(unsigned char *ident)
{
 printf("Magic:   %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x\n",
        ident[0], ident[1], ident[2], ident[3], ident[4], ident[5], ident[6], ident[7], ident[8], ident[9],
        ident[10], ident[11], ident[12], ident[13], ident[14], ident[15], ident[16], ident[17], ident[18], ident[19]);
}

void print_class(unsigned char e_ident[EI_NIDENT])
{
 printf("Class:                             ");
 if (e_ident[EI_CLASS] == ELFCLASSNONE)
 {
  printf("<unknown>\n");
 }
 else if (e_ident[EI_CLASS] == ELFCLASS32)
 {
  printf("ELF32\n");
 }
 else if (e_ident[EI_CLASS] == ELFCLASS64)
 {
  printf("ELF64\n");
 }
}

void print_data(unsigned char e_ident[EI_NIDENT])
{
 printf("Data:                              ");
 if (e_ident[EI_DATA] == ELFDATANONE)
 {
  printf("<unknown>\n");
 }
 else if (e_ident[EI_DATA] == ELFDATA2LSB)
 {
  printf("2's complement, little endian\n");
 }
 else if (e_ident[EI_DATA] == ELFDATA2MSB)
 {
  printf("2's complement, big endian\n");
 }
}

void print_version(unsigned char e_ident[EI_NIDENT])
{
 printf("Version:                           %d\n", e_ident[EI_VERSION]);
}

void print_osabi(unsigned char e_ident[EI_NIDENT])
{
 printf("OS/ABI:                            ");
 switch (e_ident[EI_OSABI])
 {
 case ELFOSABI_SYSV:
  printf("UNIX System V ABI\n");
  break;
 case ELFOSABI_HPUX:
  printf("HP-UX ABI\n");
  break;
 case ELFOSABI_NETBSD:
  printf("NetBSD ABI\n");
  break;
 case ELFOSABI_LINUX:
  printf("Linux ABI\n");
  break;
 case ELFOSABI_SOLARIS:
  printf("Solaris ABI\n");
  break;
 case ELFOSABI_AIX:
  printf("AIX ABI\n");
  break;
 case ELFOSABI_IRIX:
  printf("IRIX ABI\n");
  break;
 case ELFOSABI_FREEBSD:
  printf("FreeBSD ABI\n");
  break;
 case ELFOSABI_TRU64:
  printf("TRU64 UNIX ABI\n");
  break;
 case ELFOSABI_MODESTO:
  printf("Modesto ABI\n");
  break;
 case ELFOSABI_OPENBSD:
  printf("OpenBSD ABI\n");
  break;
 case ELFOSABI_ARM_AEABI:
  printf("ARM EABI\n");
  break;
 case ELFOSABI_ARM:
  printf("ARM\n");
  break;
 case ELFOSABI_STANDALONE:
  printf("Standalone (embedded) application\n");
  break;
 default:
  printf("<unknown>\n");
  break;
 }
}

void print_abiversion(unsigned char e_ident[EI_NIDENT])
{
 printf("ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

void print_type(Elf64_Ehdr *ehdr)
{
 printf("Type:                              ");
 if (ehdr->e_type == ET_NONE)
 {
  printf("NONE (Unknown type)\n");
 }
 else if (ehdr->e_type == ET_REL)
 {
  printf("REL (Relocatable file)\n");
 }
 else if (ehdr->e_type == ET_EXEC)
 {
  printf("EXEC (Executable file)\n");
 }
 else if (ehdr->e_type == ET_DYN)
 {
  printf("DYN (Shared object file)\n");
 }
 else if (ehdr->e_type == ET_CORE)
 {
  printf("CORE (Core file)\n");
 }
 else
 {
  printf("<unknown>\n");
 }
}

void print_entry(Elf64_Ehdr *ehdr)
{
 printf("Entry point address:               0x%lx\n", ehdr->e_entry);
}

void print_format(unsigned char e_ident[EI_NIDENT])
{
 printf("Format:                            ");
 if (e_ident[EI_CLASS] == ELFCLASS32)
 {
  printf("ELF32\n");
 }
 else if (e_ident[EI_CLASS] == ELFCLASS64)
 {
  printf("ELF64\n");
 }
 else
 {
  printf("<unknown>\n");
 }
}

int main(int argc, char *argv[])
{

 int fd;

 fd = open(argv[1], O_RDONLY);
 if (fd == -1)
 {
  fprintf(stderr, "Failed to open %s: %s\n", argv[1], strerror(errno));
  return 98;
 }

 Elf64_Ehdr;
 Elf64_Ehdr ehdr;

 if (read(fd, &ehdr, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
 {
  fprintf(stderr, "Failed to read ELF header: %s\n", strerror(errno));
  close(fd);
  return 98;
 }

 if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0)
 {
  fprintf(stderr, "%s is not an ELF file\n", argv[1]);
  close(fd);
  return 98;
 }

 print_magic(ehdr.e_ident);
 print_class(ehdr.e_ident);
 print_data(ehdr.e_ident);
 print_version(ehdr.e_ident);
 print_osabi(ehdr.e_ident);
 print_abiversion(ehdr.e_ident);
 print_type(&ehdr);
 print_entry(&ehdr);
 print_format(ehdr.e_ident);

 close(fd);

 return 0;
}
