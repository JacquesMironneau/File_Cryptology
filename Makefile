#Makefile pour la construction du programme de codage d'un mot avec un mot clef

CC=cc -g -Wall -c

# quand on tape "make" sans paramÃ¨tre 

tout: recopie cryptage

# Compilation des programmes principaux 

recopie: recopie.o MachineCaracteres.o
	cc -o recopie recopie.o MachineCaracteres.o
	
cryptage: cryptage.o MachineCaracteres.o MachineMots.o Crypt.o LexMot.o
	cc -o cryptage cryptage.o MachineCaracteres.o \
	      MachineMots.o Crypt.o LexMot.o

# Compilation des modules 

MachineCaracteres.o: MachineCaracteres.c MachineCaracteres.h
	$(CC) MachineCaracteres.c
	
MachineMots.o: MachineMots.c MachineMots.h MachineCaracteres.h LexMot.h
	$(CC) MachineMots.c
	
Crypt.o: Crypt.c Crypt.h MachineCaracteres.h LexMot.h
	$(CC) Crypt.c
	
LexMot.o: LexMot.c LexMot.h
	$(CC) LexMot.c
	
recopie.o: recopie.c MachineCaracteres.h
	$(CC) recopie.c
	
cryptage.o: cryptage.c Crypt.h MachineCaracteres.h LexMot.h
	$(CC) cryptage.c
	
# pour faire le mÃ©nage 
clean:
	rm -f *~ *.o recopie cryptage

## Avirer pour les Ã©tudiants (head -41 Makefile)
