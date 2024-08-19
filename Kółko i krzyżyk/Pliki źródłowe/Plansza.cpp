#include "Plansza.h"

using namespace KolkoIKrzyzyk;

[STAThreadAttribute]

int main(array <String^> ^args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	KolkoIKrzyzyk::Plansza forma;
	Application::Run(% forma);

	return 0;
}
