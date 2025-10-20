#include <Arduino.h>
#line 1 "C:\\Users\\potlo\\Desktop\\rover_safety_controller\\src\\LLSketch\\LLSketch.ino"
#include <AlPlc_PMC.h>

/* pmc_1.0.6
*/

struct PLCSharedVarsInput_t
{
};
PLCSharedVarsInput_t& PLCIn = (PLCSharedVarsInput_t&)m_PLCSharedVarsInputBuf;

struct PLCSharedVarsOutput_t
{
};
PLCSharedVarsOutput_t& PLCOut = (PLCSharedVarsOutput_t&)m_PLCSharedVarsOutputBuf;


AlPlc AxelPLC(1080115864);

// shared variables can be accessed with PLCIn.varname and PLCOut.varname

#line 21 "C:\\Users\\potlo\\Desktop\\rover_safety_controller\\src\\LLSketch\\LLSketch.ino"
void setup();
#line 34 "C:\\Users\\potlo\\Desktop\\rover_safety_controller\\src\\LLSketch\\LLSketch.ino"
void loop();
#line 21 "C:\\Users\\potlo\\Desktop\\rover_safety_controller\\src\\LLSketch\\LLSketch.ino"
void setup()
{
	// Configure static IP address
	IPAddress ip(192, 168, 1, 11);
	IPAddress dns(8, 8, 8, 8);
	IPAddress gateway(192, 168, 1, 1);
	IPAddress subnet(255, 255, 255, 0);
	// If cable is not connected this will block the start of PLC with about 60s of timeout!
	Ethernet.begin(ip, dns, gateway, subnet);

	AxelPLC.Run();
}

void loop()
{

}

