################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/group.cpp \
../src/main.cpp \
../src/student.cpp \
../src/zachetka.cpp 

OBJS += \
./src/group.o \
./src/main.o \
./src/student.o \
./src/zachetka.o 

CPP_DEPS += \
./src/group.d \
./src/main.d \
./src/student.d \
./src/zachetka.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


