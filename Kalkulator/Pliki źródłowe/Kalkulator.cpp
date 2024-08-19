#include "Kalkulator.h"

using namespace ProjektKalkulator;

[STAThreadAttribute]

int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	ProjektKalkulator::Kalkulator okno;
	Application::Run(%okno);
	return 0;
}
