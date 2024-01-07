################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/DIO/subdir.mk
-include HAL/LCD/subdir.mk
-include HAL/KPD/subdir.mk
-include HAL/H_BRIDGE/subdir.mk
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
LAB6_H_BRIDGE_DRIVER04.lss \

SIZEDUMMY += \
sizedummy \


# All Target
all: LAB6_H_BRIDGE_DRIVER04.elf secondary-outputs

# Tool invocations
LAB6_H_BRIDGE_DRIVER04.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,LAB6_H_BRIDGE_DRIVER04.map -mmcu=atmega32 -o "LAB6_H_BRIDGE_DRIVER04.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

LAB6_H_BRIDGE_DRIVER04.lss: LAB6_H_BRIDGE_DRIVER04.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S LAB6_H_BRIDGE_DRIVER04.elf  >"LAB6_H_BRIDGE_DRIVER04.lss"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: LAB6_H_BRIDGE_DRIVER04.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 LAB6_H_BRIDGE_DRIVER04.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) LAB6_H_BRIDGE_DRIVER04.elf
	-@echo ' '

secondary-outputs: $(LSS) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
