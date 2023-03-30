#@copyrights : AMR
CC=arm-none-eabi-
CFLAGS= -mcpu=cortex-m3 -mthumb -gdwarf-2
INCS= -I .
LIBS=
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
As=$(wildcard *.s)
AsOBJ=$(As:.s=.o)
Project_name=learn-in-depth_cortex_m3

all : $(Project_name).bin
	@echo "build is done"	


%.o: %.c
	export PATH=C:\yagarto-20121222\bin:$PATH
	$(CC)gcc.exe -c $(CFLAGS) $(INCS) $< -o $@


startup.o: startup.s
	export PATH=C:\yagarto-20121222\bin:$PATH
	$(CC)as.exe $(CFLAGS) $(INCS) $< -o $@


$(Project_name).elf: $(AsOBJ) $(OBJ)
	export PATH=C:\yagarto-20121222\bin:$PATH
	$(CC)ld.exe -T linker_script.ld $(AsOBJ) $(OBJ) $(LIBS) -o $@ -Map=Map_file.map


$(Project_name).bin: $(Project_name).elf
	export PATH=C:\yagarto-20121222\bin:$PATH
	$(CC)objcopy.exe -O binary $(Project_name).elf $(Project_name).bin


clean_all:
	rm *.o *.elf *.bin *.map


clean: 
	rm *.elf *.bin