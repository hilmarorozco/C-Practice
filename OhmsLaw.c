#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// Find voltage from power and resistance.
void calcVoltage_PR(float*power, float*resistance)
{
	float voltage;

	printf("Enter the value of power: ");
	scanf("%f", power);
	printf("Enter the value of resistance: ");
	scanf("%f", resistance);

	voltage = sqrtf(*power * *resistance);
	printf("The voltage is %.3e with units of Volts.\n", voltage);
}

// Find voltage from power and current.
void calcVoltage_PI(float*power, float*current)
{
	float voltage;

	printf("Enter the value of power: ");
	scanf("%f", power);
	printf("Enter the value of current: ");
	scanf("%f", current);

	voltage = (*power / *current);
	printf("The voltage is %.3e with units of Volts.\n", voltage);
}

// Find voltage from current and resistance.
void calcVoltage_IR(float*current, float*resistance)
{
	float voltage;

	printf("Enter the value of current: ");
	scanf("%f", current);
	printf("Enter the value of resistance: ");
	scanf("%f", resistance);

	voltage = (*current) * (*resistance);
	printf("The voltage is %.3e with units of Volts.\n", voltage);
}

// Find resistance from voltage and current.
void calcResistance_VI(float*voltage, float*current)
{
	float resistance;

	printf("Enter the value of voltage: ");
	scanf("%f", voltage);
	printf("Enter the value of current: ");
	scanf("%f", current);

	resistance = (*voltage) / (*current);
	printf("The resistance is %.3e with units of Ohms.\n", resistance);
}

// Find resistance from voltage and power.
void calcResistance_VP(float*voltage, float *power)
{
	float resistance;

	printf("Enter the value of voltage: ");
	scanf("%f", voltage);
	printf("Enter the value of power: ");
	scanf("%f", power);

	resistance = pow(*voltage,2) / (*power);
	printf("The resistance is %.3e with units of Ohms.\n", resistance);
}

// Find resistance from power and current.
void calcResistance_PI(float*power, float*current)
{
	float resistance;

	printf("Enter the value of power: ");
	scanf("%f", power);
	printf("Enter the value of current: ");
	scanf("%f", current);

	resistance = (*power) / pow(*current,2);
	printf("The resistance is %.3e with units of Ohms.\n", resistance);
}

// Find current from power and resistance.
void calcCurrent_PR(float*power, float*resistance)
{
	float current;

	printf("Enter the value of power: ");
	scanf("%f", power);
	printf("Enter the value of resistance: ");
	scanf("%f", resistance);

	current = sqrtf(*power / *resistance);
	printf("The current is %.3e with units of Amps.\n", current);
}

// Find current from power and voltage.
void calcCurrent_PV(float*power, float*voltage)
{
	float current;

	printf("Enter the value of power: ");
	scanf("%f", power);
	printf("Enter the value of voltage: ");
	scanf("%f", voltage);

	current = (*power) / (*voltage);
	printf("The current is %.3e with units of Amps.\n", current);
}

// Find current from voltage and resistance.
void calcCurrent_VR(float*voltage, float*resistance)
{
	float current;

	printf("Enter the value of voltage: ");
	scanf("%f", voltage);
	printf("Enter the value of resistance: ");
	scanf("%f", resistance);

	current = (*voltage) / (*resistance);
	printf("The current is %.3e with units of Amps.\n", current);
}

// Find power from voltage and current.
void calcPower_VI(float*voltage, float*current)
{
	float power;

	printf("Enter the value of voltage: ");
	scanf("%f", voltage);
	printf("Enter the value of current: ");
	scanf("%f", current);

	power = (*voltage) * (*current);
	printf("The power is %.3e with units of Watts.\n", power);

}

// Find power from current and resistance.
void calcPower_IR(float*current, float*resistance)
{
	float power;

	printf("Enter the value of current: ");
	scanf("%f", current);
	printf("Enter the value of resistance: ");
	scanf("%f", resistance);


	power = pow(*current,2) * (*resistance);
	printf("The power is %.3e with units of Watts.\n", power);
}

// Find power from voltage and resistance.
void calcPower_VR(float*voltage, float*resistance)
{
	float power;

	printf("Enter the value of voltage: ");
	scanf("%f", voltage);
	printf("Enter the value of resistance: ");
	scanf("%f", resistance);

	power = pow(*voltage,2) / (*resistance);
	printf("The power is %.3e with units of Watts.\n", power);
}



int main(void)
{
	float voltage = 0.0;
	float resistance = 0.0;
	float current = 0.0;
	float power = 0.0;
	int option;
	int choice;

	printf("Welcome to the Ohm’s Law program.\n");

	while(1){

	// Prompt the user for an option.
	printf("\n\nWhat would you like to find? Choose an option:\n");
	printf("\t0 Quit\n\t1 Voltage\n\t2 Resistance\n");
	printf("\t3 Current\n\t4 Power\n\t> ");
	scanf("%d", &option);

	if(option == 0)
	{
		printf("Have a nice day!\n");
		break;
	}
	if(option == 1) // Voltage
	{
		printf("\nWhat two values do you have to find Voltage?\n");
		printf("\t1 Power and Resistance\n");
		printf("\t2 Power and Current\n");
		printf("\t3 Current and Resistance\n\t> ");
		scanf("%d", &choice);

		// Prompt the user for an choice.
		switch (choice)
		{
		case 1:
			calcVoltage_PR(&power, &resistance);
			break;
		case 2:
			calcVoltage_PI(&power, &current);
			break;
		case 3:
			calcVoltage_IR(&current, &resistance);
			break;
		}
	}
	if(option == 2) // Resistance
	{
		printf("\nWhat two values do you have to find Resistance?\n");
		printf("\t1 Voltage and Current\n");
		printf("\t2 Voltage and Power\n");
		printf("\t3 Power and Current\n\t> ");
		scanf("%d", &choice);

		// Prompt the user for an choice.
		switch (choice)
		{
		case 1:
			calcResistance_VI(&voltage, &current);
			break;
		case 2:
			calcResistance_VP(&voltage, &power);
			break;
		case 3:
			calcResistance_VI(&voltage, &current);
			break;
		}
	}
	if(option == 3) // Current
	{
		printf("\nWhat two values do you have to find Current?\n");
		printf("\t1 Power and Resistance\n");
		printf("\t2 Voltage and Power\n");
		printf("\t3 Voltage and Resistance\n\t> ");
		scanf("%d", &choice);

		// Prompt the user for an choice.
		switch (choice)
		{
		case 1:
			calcCurrent_PR(&power, &resistance);
			break;
		case 2:
			calcCurrent_PV(&power, &voltage);
			break;
		case 3:
			calcCurrent_VR(&voltage, &resistance);
			break;
		}
	}
	if(option == 4) // Power
	{
		printf("\nWhat two values do you have to find Power?\n");
		printf("\t1 Voltage and Current\n");
		printf("\t2 Current and Resistance\n");
		printf("\t3 Voltage and Resistance\n\t> ");
		scanf("%d", &choice);

		// Prompt the user for an choice.
		switch (choice)
		{
		case 1:
			calcPower_VI(&voltage, &current);
			break;
		case 2:
			calcPower_IR(&current, &resistance);
			break;
		case 3:
			calcPower_VR(&voltage, &resistance);
			break;
		}
	}
	if(option < 0 || option > 4)
	{
		printf("Please insert a valid option.\n");
	}
	}
	return EXIT_SUCCESS;
}



