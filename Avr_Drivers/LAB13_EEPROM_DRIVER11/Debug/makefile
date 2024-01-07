################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/USART/subdir.mk
-include MCAL/TWI/subdir.mk
-include MCAL/TIMER/Watch_Dog/subdir.mk
-include MCAL/TIMER/subdir.mk
-include MCAL/SPI/subdir.mk
-include MCAL/GIE/subdir.mk
-include MCAL/EXT_INT/subdir.mk
-include MCAL/DIO/subdir.mk
-include MCAL/ADC/subdir.mk
-include HAL/LCD/subdir.mk
-include HAL/KPD/subdir.mk
-include HAL/H_BRIDGE/subdir.mk
-include HAL/EEPROM/subdir.mk
-include APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
LAB13_EEPROM_DRIVER11.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: LAB13_EEPROM_DRIVER11.elf secondary-outputs

# Tool invocations
LAB13_EEPROM_DRIVER11.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,LAB13_EEPROM_DRIVER11.map -mmcu=atmega32 -o "LAB13_EEPROM_DRIVER11.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

LAB13_EEPROM_DRIVER11.lss: LAB13_EEPROM_DRIVER11.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S LAB13_EEPROM_DRIVER11.elf  >"LAB13_EEPROM_DRIVER11.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: LAB13_EEPROM_DRIVER11.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 LAB13_EEPROM_DRIVER11.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) LAB13_EEPROM_DRIVER11.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
