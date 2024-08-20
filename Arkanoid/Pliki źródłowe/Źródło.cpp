#include "Autor.h"
#include "Powitanie.h"
#include "Gra.h"

using namespace Arkanoid;


void ZamknijOkno(Object^ sender, FormClosedEventArgs^ e) {
	if (Application::OpenForms->Count == 0) {
		Application::Exit();
	}
	else {
		Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(ZamknijOkno);
	}
}


[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Powitanie^ pierwsza = gcnew Powitanie();
	pierwsza->FormClosed += gcnew FormClosedEventHandler(ZamknijOkno);
	pierwsza->Show();
	Application::Run();
	return 0;
}