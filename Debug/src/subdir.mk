################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/CitanjeUpisivanjeFileova.cpp \
../src/Ispit.cpp \
../src/Nastavnik.cpp \
../src/Person.cpp \
../src/Predmet.cpp \
../src/Student.cpp \
../src/StudentskaSluzba.cpp \
../src/StudijskiProgram.cpp \
../src/Usmjerenje.cpp \
../src/ZajednickeMetode.cpp 

OBJS += \
./src/CitanjeUpisivanjeFileova.o \
./src/Ispit.o \
./src/Nastavnik.o \
./src/Person.o \
./src/Predmet.o \
./src/Student.o \
./src/StudentskaSluzba.o \
./src/StudijskiProgram.o \
./src/Usmjerenje.o \
./src/ZajednickeMetode.o 

CPP_DEPS += \
./src/CitanjeUpisivanjeFileova.d \
./src/Ispit.d \
./src/Nastavnik.d \
./src/Person.d \
./src/Predmet.d \
./src/Student.d \
./src/StudentskaSluzba.d \
./src/StudijskiProgram.d \
./src/Usmjerenje.d \
./src/ZajednickeMetode.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


