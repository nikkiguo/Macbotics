#pragma config(Motor,  port1,           leftmotor,     tmotorVex393_HBridge, openLoop, reversed)
#pragma config(Motor,  port9,           sideway,       tmotorVex393_MC29, openLoop, reversed)
#pragma config(Motor,  port10,          rightmotor,    tmotorVex393_HBridge, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

// Arcade Drive: Horizontal



task main()
{
	while (1==1) {
		motor[rightmotor]  = (vexRT[Ch2] + vexRT[Ch1]); // Vertical + Horizontal (Left side)
		motor[leftmotor] = (vexRT[Ch2] - vexRT[Ch1]); // Vertical - Horizontal (Right side)
		motor[sideway] = (vexRT[Ch4]); // Controls side wheel
	}


}
