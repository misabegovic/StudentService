################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/MyFunctions.cpp \
../src/Nastavnik.cpp \
../src/Predmet.cpp \
../src/StudentskaSluzba.cpp \
../src/StudijskiProgram.cpp 

OBJS += \
./src/MyFunctions.o \
./src/Nastavnik.o \
./src/Predmet.o \
./src/StudentskaSluzba.o \
./src/StudijskiProgram.o 

CPP_DEPS += \
./src/MyFunctions.d \
./src/Nastavnik.d \
./src/Predmet.d \
./src/StudentskaSluzba.d \
./src/StudijskiProgram.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


