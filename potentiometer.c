#pragma config(Sensor, in1,    potentiometer,  sensorPotentiometer)
#pragma config(Motor,  port1,           leftmotor,     tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port9,           sideway,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          rightmotor,    tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

// Potentiometer program

task main()
{
	while (1==1)
	{
		while(SensorValue[potentiometer] < 4000)
		{
			motor(sideway) = 63;
		}
		while(SensorValue[potentiometer] > 500)
		{
			motor(sideway) = -63;
		}
	}
}
